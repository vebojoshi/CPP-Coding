#include<iostream>
#include<string>


using namespace std;

class bank
{
	private:
	protected:
	public:
};
//concept of access modifier s


class  account:public bank
{
	private:                                 //make it public and run
	  string Password;
	 void secret()
	{
		cout<<"This is Secret Function from private"<<endl;
		cout<<"The password is "<<Password;
	}
	
	public:account(string s)
	{
		Password=s;
	}
		
};

int main()
{
	
	account a1("vaibhav123");
	a1.secret();
	return 0;
}
