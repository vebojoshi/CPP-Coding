	#include<iostream>
	#include<stack>
	
	using namespace std;
	int main(){
	
		stack<string> s;
		
		s.push("Vaibhav");
		s.push("Joshi");
		
		cout<<"Top element->"<<s.top()<<endl;
		
		s.pop();
		cout<<"Size of stack->"<<s.size()<<endl;	
		
		cout<<"Empty or not"<<s.empty()<<endl;
	}	
