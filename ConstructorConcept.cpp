#include<iostream>

using namespace std;

class 	Base
{
		int _x;
		public:
			Base(){	cout<<"ctor called "<<endl;
			}	
			Base(int x)	:_x(x) { cout<<"ctor called "<<endl;
			}
};

int main()
{
	Base b1(10);
	Base b2();                    // try with only Base();
	return 0;
}


// op   ctor called 
