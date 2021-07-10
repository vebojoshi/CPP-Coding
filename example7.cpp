#include<stdio.h>
int main()
{
	int a[]={1,5};
	printf("%d",*a);
	(*a)++;
	printf("%d",*a);
	return 0;
}

//concept Manipulating Pointers with array.
//  o/p -> 1 2  *a->base address of array so 1 
//              (*a)++ ->base address of array++ so 1++  is 2
                
