//  ALGORITHM

#include<iostream>
#include<algorithm>
#include<vector>
	
using namespace std;

int main(){
	vector<int> v;
	
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	
	cout<<"finding 6 using BST"<<binary_search(v.begin(),v.end(),6)<<endl;
	
}
