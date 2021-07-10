#include<stdio.h>
int main()
{
	int a=50,b=25,c=0;
	bool k;
	k=(a>45 || b>50 && c>10);
	printf("%d",k);
}


//concept of operator prcedence & Assciativity is 
//kept into mind that && is evaluated before ||
