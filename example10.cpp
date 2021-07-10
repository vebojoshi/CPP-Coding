#include<stdio.h>
main()
{
	int a[3][2]={{1,2},{3,4},{5,6}};
	printf("%d,%d,%d\n",a[2][1],*(a[2])+1),**(a+2)+1;
	return 0;
}


//Multi-dimensional Array concept , pointer to array concept.
// o/p- 6 6 0	
