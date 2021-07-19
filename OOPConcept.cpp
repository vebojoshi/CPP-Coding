#include<iostream>
using namespace std;

class A
{
 public : void print()
	{
	   cout<< "A";
	}	
};

class B
{
 public : void print()
	{
	   cout<< "B";
	}	
};


class C
{
 public : void print()
	{
	   cout<< "C";
	}	
};


int main()
	{
		A A;
		B B;
		C C;
		
		  A.print();
		  B.print();
		  C.print();	
		  
		  return 0;	  
	}
	
	
// op  ABC    


// concept  classname and object name could be same;
