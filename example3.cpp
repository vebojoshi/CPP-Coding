#include<stdio.h>
int main()
{
	int num[]={1,4,8,12,16};
	int *a,*b;
	int i;
    a=num;
    b=num+2;
    i=*a+1;
    printf("%d , %d  ,%d \n",i,*a,*b);
    return 0;
}

//output 2 , 1, 8
//concept pointer to array
// a=num   , so num[0] i.e base is considered .
// b=num+2 , so num[0+2]=num[2] is considered.

