#include <cstdio>

int main() {
  int my_array[100];
  int arr[] = {10, 25, 32, 47, 59};
  printf("The second element is %d.\n", arr[1]);

  // for loop
  for (size_t i = 0; i < 5; i++) {
    printf("%zd, %d\n", i, arr[i]);
  }

  // range-based loop
  for (int value : arr) {
    printf("%d\n", value);
  }
  return 0;
}