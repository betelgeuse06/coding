#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[3] = {11, 22, 33};
  int * ptr = arr;
  printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

  printf("%d \n", *ptr); ptr++;
  printf("%d \n", *ptr); ptr++;
  printf("%d \n", *ptr); ptr--;
  printf("%d \n", *ptr); ptr--;
  printf("%d \n", *ptr); printf("\n");
  return 0;
}
