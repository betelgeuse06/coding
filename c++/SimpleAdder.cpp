#include <iostream>

int main(int argc, char const *argv[]) {
  int val1;
  std::cout << "첫번째 숫자입력: " <<;
  std::cin >> val1;

  int val2;
  std::cout << "두번째 숫자입력" << '\n';
  std::cin >> val2;

  int result = val1 + val2;
  std::cout << "덧셈결과: " <<result<< '\n';
  return 0;
}
