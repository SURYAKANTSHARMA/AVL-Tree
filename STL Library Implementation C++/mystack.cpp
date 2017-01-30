#include "mystack.h"
#include<iostream>
using namespace std;
template<typename ElemType>
mystack<ElemType>::mystack()
{   arr=new ElemType[2];
    numAllocated=2;
    numUsed=0;
}
template<typename ElemType>
mystack<ElemType>::~mystack()
{ delete[] arr;
}
template<typename ElemType>
int mystack<ElemType> ::size()
{   
    return numUsed;
}
template<typename ElemType>
void mystack<ElemType>::push(ElemType s)
{   if(numUsed==numAllocated)
       doubleCapacity();
       arr[numUsed++]=s;
}
template<typename ElemType>
ElemType mystack<ElemType>::pop()
{    if(numUsed==-1)
       cout<<"\nError :no element for pop";
       else
       {
       	ElemType top=arr[numUsed-1];
       	numUsed-=1;
       	return top;
       }
}
template<typename ElemType>
void mystack<ElemType>::doubleCapacity()
{  ElemType * ptr;
   ptr=new ElemType[numAllocated*2];
   for(int i=0;i<numUsed;i++)
   ptr[i]=arr[i];
   delete[] arr;
   arr=ptr;
   numAllocated*=2;
}
template<typename ElemType>
bool mystack<ElemType>::isEmpty()
{
	if(numUsed==0)
	return true;
	else 
	return false;
}
