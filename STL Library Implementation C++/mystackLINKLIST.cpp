#include "mystack.h"
#include<iostream>
using namespace std;
template<typename ElemType>
mystack<ElemType>::mystack()
{ 
  head=NULL;
}
template<typename ElemType>
mystack<ElemType>::~mystack()
{    //delete the entire list
  node * n=head; 
  while(head!=NULL)
   {  
     head=head->next;
   	 delete n;
	 n=head;	  
   }
}
template<typename ElemType>
int mystack<ElemType>::size()
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
bool mystack<ElemType>::isEmpty()
{   if(head==NULL)
     return true;
    else
     return false;
}
template<typename ElemType>
void mystack<ElemType>::push(ElemType e){
    //push in linked list form
    node *n,*ptr;
	n=new node;
    n->value=e;
    n->next=NULL;
	if(head==NULL)
	head=n;
	else
	{
	n->next=head;
	head=n;
		}	
}
template<typename ElemType>
ElemType mystack<ElemType>::pop()
{  //pop topmost element from the stack
   ElemType item;
   if(head!=NULL){
   node * top=head;
   head=head->next;
   item=top->value;
   delete top;
   return item;
}
else 
 cout<<"\nError no element for pop";
}
