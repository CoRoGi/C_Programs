/* This file is meant to be used to test code out */

#include <stdio.h>

#define squared(x) ((x)*(x))

int main(void) 
{
  double ans = 18.0/squared(2+1);

  printf("Squared: %d\n", squared(2+1));
  printf("Answer: %f\n", ans);

  return 0;
}
