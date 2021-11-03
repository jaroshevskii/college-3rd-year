#include <iostream>

/// Отимати обернене число.
int getInvertNumber(int number) {
  int invertNumber = 0;

  while (number) {
    invertNumber = invertNumber * 10 + number % 10;
    number /= 10;
  }

  return invertNumber;
}

/// Є паліндромом.
bool isPalindrom(const int &number) {
  return number == getInvertNumber(number);
}

int main() {
  for (int i = 10; i < 300; ++i) {
    if (isPalindrom(i * i)) {
      std::cout << std::string(32, '-') << '\n'
                << "Number: " << i << '\n'
                << "Palindrom: " << i * i << '\n';
    }
  }

  std::cout << std::string(32, '-') << '\n';
  std::cout << '\n';
  return 0;
}