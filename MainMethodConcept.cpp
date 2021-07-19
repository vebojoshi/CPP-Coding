#include<iostream>

using namespace std;

class main{
		int x;	
		public:
			   main(): main(0){}
			   main(int x): x{x} {}
			   int get(){ return x;}
}; 

	
int main()
{
	class main m(10);                 // try without class 
	cout<<m.get() <<endl;
	return 0;	
}
