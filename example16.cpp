#include<stdio.h>
#include<stdlib.h>
int main()
{
  int x, y;
  printf("Enter two number: ");
  scanf("%d %d",&x,&y);

  // method 1
  printf("%d\n", x-(-y));

  // method 2
  printf("%d\n", -(-x-y));

  // method 3
  printf("%d\n", abs(-x-y));

  // method 4
  printf("%d", x-(~y)-1);

  return 0;
}

// O/p ->  2 2
           4 4 4 4 
// concept of operators 
// addition of two numbers without '-' operator
