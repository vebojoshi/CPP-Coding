#include<iostream>
using namespace std;

class One{
		public:
			double  add(double x)
			 {
				return x+0.1;
		     }
		    char  add(char a)
			{
			 return a;
			}
			
};


class Two:public One{
	public:	
			int add(int x)
			{
				return x;
			}


int main()
{
	Two obj;
	cout<<obj.add(10)<<""<<obj.add(10.5)<<endl;
	return 0;
}


};
