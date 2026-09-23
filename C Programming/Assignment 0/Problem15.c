// Write a C program to swap two numbers without using a temporary third variable.

#include <stdio.h>

int main()
{
  int a = 50;
  int b = 10;
  a = a + b;
  b = a - b;
  a = a - b;
  printf("a is %d and b is %d ", a, b);

  return 0;
}