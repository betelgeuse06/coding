#include <iostream>

int main(int argc, char const *argv[]) {
  int num1, num2, num3;
  std::cin >> num1;
  while (num3 < 9) {
    ++num3;
    std::cout << num1 << " X " << num3 << "=" << num1 * num3 << '\n';
  }
  return 0;
}
