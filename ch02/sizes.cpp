#include <cstddef>
#include <cstdio>

int main() {

  // Get and print sizes of various types
  size_t size_c = sizeof(char);
  printf("char: %zd\n", size_c);
  size_t size_s = sizeof(short);
  printf("short: %zd\n", size_s);
  size_t size_i = sizeof(int);
  printf("int: %zd\n", size_i);

  // 8 on osx/linux, 4 on windows
  size_t size_l = sizeof(long);
  printf("long: %zd\n", size_l);
  size_t size_ll = sizeof(long long);
  printf("long long: %zd\n", size_ll);

  return 0;
}