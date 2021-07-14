// Concept of Virtual Function and Modifier access.


#include<iostream>
#include<string>


using namespace std;

class bank
{
	private:
	protected:
	public:
	virtual void  secret()  { }                       // remove virtual and run it
	                                                     
	
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
	
	account a1("vaibhav@123");
	bank *ptr;
	ptr=&a1;
	ptr->secret();
	return 0;
}
