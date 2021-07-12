#include<iostream>
#include<map>


using namespace std;
int  main()
{
	map<int,String> m;	
	m[1]="Vaibhav";
	m[2]="Joshi";
	
	for	(auto i:m)
	{
		cout<<i.first<<endl;
	}
	cout<<"Finding 1->"m.count(1)<<endl;
	m.erase(2);
	cout<<"after erase"<<endl;
	for(auto i:m)
	{
		cout<<i.first<<""<<i.second<<endl;
	}	
}
