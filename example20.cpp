#include<stdio.h>
main()
{
	int i=0,n;
	int a[10]={1,2,3,4,5,6,7,8};
	n=a[++i]+i++ +a[i++] +a[i];
    printf("%d",n);
}

 //concept of pre-increment & post-increment.
// a[1]+1+3+4
   

