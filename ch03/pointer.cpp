#include <cstdio>

int main() {
  int my_int = 10;

  // * after a type specifies a pointer
  // & is the address-of operator
  // * before a pointer dereferences it
  int *my_ptr = &my_int;
  printf("My int is stored at %p.\n", my_ptr);
  printf("When I dereference my pointer, I get %d.\n", *my_ptr);

  // you can treat a dereferenced ptr just like the object it points to
  *my_ptr = 5;
  printf("My int is still stored at %p.\n", my_ptr);
  printf("But the value is now %d.\n", my_int);
  return 0;
}