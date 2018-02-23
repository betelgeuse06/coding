#include <stdio.h>

int main(int argc, char const *argv[]) {
  char str1[] = "My String";
  char * str2 = "Your String"
  printf("%s %s \n", str1, str2);

  str2 = "Our String";
  printf("%s %s \n", str1, str2);

  printf("%s %s \n", str1, str2);
  return 0;
}
