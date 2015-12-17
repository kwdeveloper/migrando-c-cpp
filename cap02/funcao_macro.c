#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main()
{
  int x = 5, y = 0;
  printf("x=%d y=%d\n", x, y);

  int max1 = MAX(++x, y);
  printf("x=%d y=%d max1=%d\n", x, y, max1);

  int max2 = MAX(++x, y+10);
  printf("x=%d y=%d max2=%d\n", x, y, max2);
}
