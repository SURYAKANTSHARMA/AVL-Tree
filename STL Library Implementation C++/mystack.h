#ifndef MYSTACK_H
#define MYSTACK_H
template<typename ElemType>
class mystack
{
	public:
		mystack();
		~mystack();
	    int size();
  	    bool isEmpty();
  	    void push(ElemType e);
  	    ElemType pop();
  	    private:
  	  	ElemType *arr;
  	  	int numUsed;
  	  	int numAllocated;
  	    void doubleCapacity();
};
#include"mystack.cpp"
//-->little crook in c++  has to add in c++ template intiation not be delayed to load time
#endif
