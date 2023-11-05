// Noah Meza
// noahmeza16@csu.fullerton.edu
// @Noah4563
// Partners: @Chris-Loeza


#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number" << std::end1;
    return -1;
  }

  double sum = 0.0;
  bool first = true;

  for (std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      double number = std::stod(arguments);
      sum += number ;
    }
  }

    double avg = 0.0;
    avg = sum / (static_cast<int>(arguments.size()) - 1);

  std::cout << "\naverage = " << avg << std::end1;

  return 0;
}



  