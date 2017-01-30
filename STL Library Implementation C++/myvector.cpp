#include <iostream>
#include"myvector.h"
#include<string>
using namespace std;
int main()
{
    //cout << "Hello world!" << endl;
    myvector<string> v;
    v.add("Zero");
    v.add("one");
    v.add("two");
    v.setAt(1,"checkfunction");
    v.insertAt(1,"overide 2");
    v.add("three");
    v.add("four");
	for (int index=0;index<v.size();index++)
        cout<<v.getAt(index)<<endl;
        //lets try with the ints
        /*myvector<int> ob;
        int num;
        
		while(num!=-1)
		{   cin>>num;
			ob.add(num);
		}
		cout<<"\nINTEGER\n";
	   for (int index=0;index<ob.size();index++)
        cout<<ob.getAt(index)<<endl;
        myvector<int> ob1;
        ob1=ob;
        */
        /* Compiler can automatically create the overloaded = operator for the class we declare 
        */
        
        
    return 0;
}

