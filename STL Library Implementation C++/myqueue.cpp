#include "myqueue.h"
#include<iostream>
using namespace std;
template<typename ElemType> 
Myqueue<ElemType>::Myqueue()
{  head=NULL;
}
template<typename ElemType> 
Myqueue<ElemType>::~Myqueue()
{ node * n=head; 
   while(head!=NULL)
   {  
     head=head->next;
   	 delete n;
	 n=head;	  
   }
}
template<typename ElemType>
int Myqueue<ElemType>::size()
{
	int count=0;
	node *ptr=head;
	while(ptr!=NULL)
	{   count++;
		ptr=ptr->next;
	}
	return count;
}
template<typename ElemType>
bool Myqueue<ElemType>::isEmpty()
{   if(head==NULL)
     return true;
    else
     return false;
}
template<typename ElemType>
void Myqueue<ElemType>::enqueue(ElemType e){
    //enqueue in linked list form
    node *n,*ptr;
	n=new node;
    n->value=e;
    n->next=NULL;
	if(head==NULL)
	head=n;
	else
	{
	ptr=head;
	while(ptr->next!=NULL)
	  ptr=ptr->next;
	  ptr->next=n;
		}	
}
template<typename ElemType>
ElemType Myqueue<ElemType>::dequeue()
{  //deletion topmost element from the head
   ElemType item;
   if(head!=NULL){
      node *n=head;
      item=head->value;
      head=head->next;
      delete n;
   return item;
   }

else 
 cout<<"\nError no element for dequeue";
}


