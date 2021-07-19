#include<iostream>
using namespace std;
	
int x=10;
	
void add(int &x){
	x+=1;
}

int main()
{
	int x=20;
	add(x);                            //   try with add(::x);
	cout<< x<< endl;                   // 	cout<< ::x << endl;
	return 0;
}


// op   21                             // after trying with scope resolution o/p is 11
