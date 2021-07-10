#include<stdio.h>
int main()
{
	int a=0,b=1,c=2;
	*((a+1==1)?&b:&a)=a?b:c;
  //*((a+1==1)?&b:&a)==a?b:c;
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}


//comcept ternary operator , & assignment operator.
//o/p=0,2,2,
//if comapred ==  o/p will be 0,1,2;

