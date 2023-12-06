#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
  ifstream file("input.txt");
  string line;
  int result = 0;

  while (getline(file, line)) {
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

    string concatenatedString = string(1, lhs) + std::string(1, rhs);
    // cout << "Final digit for line: " << concatenatedString << endl;

    result += stoi(concatenatedString);
  }
  cout << "\nSum of calibration numbers is: " << result << endl;
  return 0;
}
