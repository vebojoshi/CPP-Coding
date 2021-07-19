#include<iostream>

using namespace std;

class 	Base{
	int x;	
	public:
		   Base(int x=0):x{x}
		   {
		   }  
	friend int main();	
};

int main(){
	Base b(10);	
	cout<<b.x<<endl;
	return 0;	
}


//  op 10
