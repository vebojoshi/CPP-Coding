#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x, y;
   printf("Enter two number: ");
   scanf("%d %d",&x,&y);
   printf("%d", x+(~y)+1);
   return 0;
}


// O/p -> 2 2
          0
// concept of operators  
//  subtraction of two numbers without '-' operator
