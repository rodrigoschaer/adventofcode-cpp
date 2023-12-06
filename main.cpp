#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream file("input.txt");
  std::string line;
  int result = 0;

  while (std::getline(file, line)) {
    char lhs, rhs;
    int i = 0, j = line.length() - 1;

    while (i <= line.length()) {
      if (isdigit(line[i])) {
        lhs = line[i];
        break;
      }
      i++;
    }

    while (j >= 0) {
      if (isdigit(line[j])) {
        rhs = line[j];
        break;
      }
      j--;
    }

    std::string concatenatedString = std::string(1, lhs) + std::string(1, rhs);
    result += std::stoi(concatenatedString);
  }
  std::cout << "\nSum of calibration numbers is: " << result << std::endl;
  return 0;
}
