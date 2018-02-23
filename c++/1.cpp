#include <iostream>

int main(int argc, char const *argv[]) {
  int num, i;
  int result;
  while (i < 5) {
    std::cin >> num;
    result = result + num;
    ++i;
  }
  std::cout << result << '\n';
  return 0;
}
