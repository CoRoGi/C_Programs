/* File for basic array definitions */

#include <stdio.h>

/* It is often a good idea to declare array sizes with macro */

#define N 10
#define BOOL int
#define false 0
#define true 1
typedef int Bool;

int main void() {

  //Array declaration examples
  int a[N];
  float b[N];
  char c[N];
  Bool d[N];
  int sum = 0;

  //Array subscripting (accessing elements by index)
  a[0] = 1;
  printf("%d\n", a[5]);
  ++a[3];

  //Looping through an array with for loops
  for (i = 0; i < N; i++) {
    a[i] = 0;
    scanf("Please give a number: %d", &a[i]);
    sum += a[i];
  }

  //An array subscript can be an integer expression
  a[2+3/sum] = 0;

  //The expression can also have side effects
  int side = 0;
  while (side < N) {
    a[side++] = 0;
    printf("%d\n", side); 
  }

}
