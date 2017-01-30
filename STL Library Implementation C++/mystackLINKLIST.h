#ifndef MYSTACK_H
#define MYSTACK_H
template<typename ElemType>
class mystack
{
	public:
		mystack();
		~mystack();
	bool isEmpty();
	void push(ElemType e);
	ElemType pop();	
	int size();
	protected:
    struct node{
    	ElemType value;
    	node * next;
    };	
	node* head;  
};
#include"mystackLINKLIST.cpp"
#endif
