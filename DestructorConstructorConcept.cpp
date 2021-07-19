#include<iostream>
using namespace std;

class 	GirlFriend{
	int x;
	public:
			GirlFriend(){cout<<"Girlfriend Constructed" <<endl;}	
		   ~GirlFriend(){cout<<"GirlFriend Destructed" <<endl; }
};

int main()
{
		delete new GirlFriend();
		return 0;
}
