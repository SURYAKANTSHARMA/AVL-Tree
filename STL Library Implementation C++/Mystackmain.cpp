/****
This is program for show the implemetation of stack as ADT
**/
#include<iostream>
#include<string>
#include"mystackLINKLIST.h"
using namespace std;
int main(int argc, char** argv) {
	/* mystack<int> s;
	
	int size;
	//s.push(1);
	s.push(1);
	s.push(2); 
	s.push(3);
	size=s.size();
	cout<<"size of the stack is "<<size<<endl;
	for(int i=1;i<=size;i++)
	{   
		cout<<s.pop()<<endl;
	} */
	mystack<string> s;
	int size; 
	s.push("one");
	s.push("two"); 
	s.push("three");
	size=s.size();
	cout<<"\nsize of the stack is "<<size<<endl;
	for(int i=1;i<=size;i++)
	{   
		cout<<s.pop()<<endl;
	}
	cout<<"\n"<<s.pop();
	if(s.isEmpty())
	  cout<<"\nThe stack is Empty";
	return 0;
}
