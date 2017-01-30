#ifndef MYVECTOR_H
#define MYVECTOR_H
#include<string>
//#include<iostream>
using namespace std;
//---------->InterFace----------->
template<typename ElemType>
class myvector
{
	 public:
        myvector();
        virtual ~myvector();
        int size();
        void add(ElemType s);
        ElemType getAt(int index);
        void setAt(int index,ElemType e);
        
        void insertAt(int index,ElemType e);
    private:
        ElemType *arr;
        int numUsed,numAllocated;
        void doubleCapacity();
};
#include"vectorClassDefination.cpp"
    //It is for template .h file also need not only the interface but all the code as well so it is for include 
    // defination of the  class
#endif
