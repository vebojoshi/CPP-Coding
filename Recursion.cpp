#include<iostream>

using namespace std;

void add(int &x)               // try  void add(int x)
{	
	if(x==100)
    	 return ;
	     ++x;
	     add(x);
}

int main()
{
		int x=50;
		add(x);
		cout<< x <<endl;
		return 0;
}

// op 100    ,, x recusively calling itself until becomes 100 
