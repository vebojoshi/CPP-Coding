#include<iostream>
using namespace std;

class Base	{
	public:
		   Base(){ cout<<"Default" <<endl;	}
		   Base(const Base& rhs){cout<<"Copy"<<endl;}
		   Base& operator=(const Base &	rhh){ cout<<"Assignment"<< endl; return * this;}
};

Base fun(Base b2){
		Base b3=b2;
		return b3;
}


int main(){
	Base b1;
	Base b4=fun(b1);
	return 0;
}

//concept ==>Return value optimization ,RVO


// op ==> Default
//      Copy
//      Copy
