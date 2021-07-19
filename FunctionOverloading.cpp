#include<iostream>
using namespace std;

class One{
		public:
			double  add(double x)
			 {
				return x+0.1;
		     }		    
			
};

class Two:public One
{
	public:	
			int add(double  x)    // try with double
			{
				return x;
			}

};

int main()
{
	Two obj;
	cout<<obj.add(10)<<"\t"<<obj.add(10.5)<<endl;
	return 0;
}

//op  10 10
