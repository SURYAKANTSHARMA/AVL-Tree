#ifndef MYQUEUE_H
#define MYQUEUE_H
template<typename ElemType>
class Myqueue
{
	public:
		Myqueue();
		~Myqueue();
		int size();
		void enqueue(ElemType e);
		ElemType dequeue();
		bool isEmpty();
	protected:
		struct node{
			ElemType value;
			node* next;
		};
		node *head;
};
#include"myqueue.cpp"
#endif
