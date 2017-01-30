/********** AVL tree implementation 
                                     SUMMER   PROJECT      ****************/
                          
#include<stdio.h>
#include <windows.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#define max(a,b) (a>b)?a:b;
#define MAX 100000
using namespace std;
/****************************function Prototype**************************/
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoXY(int x, int y); 

struct Node;
int draw(Node *,int ,int );
int display(Node *);
int heightNode(Node*);
int insert(Node*,int );
int deletion(Node *,int);
Node *search(Node *,int);
Node *findInorderSuccessor(Node*);
int modifyBalanceFactor(Node *);
int LLrotation(Node *);
int LRrotation(Node *);
int RRrotation(Node *);
int RLrotation(Node *);
                 //   For Array implemetation   
int display();
int heightNode(int );
int insert(int ,int );
int deletion(int [],int);
Node *search(int [],int);
Node *findInorderSuccessor(int []);
int modifyBalanceFactor(int );
int LLrotation(int []);
int LRrotation(int  []);
int RRrotation(int []);
int RLrotation(int []);	
int  convertArray();
int convertLinkedList(int,Node *);
            //   structure for linked list			               
struct Node
{
	int data;
	int balance_factor;
	Node* left_child;
	Node* right_child;
	struct Node* parent;
};
Node *root=NULL;
int avlTree[MAX]={0};
int balanceFactor[15]={0};
/**************** MAIN START********************************/
int main()
{   /* for array implementation of AVL tree*/
    int implementationMode;
    int op_choice,datam,r_choice;
    cout<<"\nEnter the implementation mode\n1.Array \n2.Linked List";
    cin>>implementationMode;	
    switch(implementationMode)
    {
     case 1:
     	  //Array implementation section
     	    do{
     	    cout<<"\nEnter the operation want to perform AVL tree \n1.Insert(non Zero) \n2.Delete \n3.Draw";	
     	    cin>>op_choice;
	   switch(op_choice)
	   {
		 case 1:
			cout<<"\nEnter data ";
			cin>>datam;
			insert(1,datam);
			//display();
			break;
		 case 2:
			cout<<"\nEnter data";
			cin>>datam;
		    //deletion(avlTree,datam);
		    display();
		    break;
		 default:
		    cout<<"\ninvalid option";
		  	}
		  cout<<"\nDo you want to continue ";

		  r_choice=getche();	
		  }while(r_choice!='n');
		  display();
			
			 
    	break;
     case 2:
     	  //Linked list implemetation section
    		do{
          cout<<"\nEnter the operation want to perform AVL tree \n1.Insert \n2.Delete \n3.draw ";
	      cin>>op_choice;
	   switch(op_choice)
	   {
		 case 1:
			cout<<"\nEnter data ";
			cin>>datam;
			insert(root,datam);
			display(root);
			break;
		 case 2:
			cout<<"\nEnter data";
			cin>>datam;
		    deletion(root,datam);
		    display(root);
		    break;
		 case 3:
		 	system("cls"); 
		 	 draw(root,3,50);
		 	 break;
		 default:
		    cout<<"\ninvalid option";
		  	}
		  cout<<"\nDo you want to continue ";
		  r_choice=getche();	
		  }while(r_choice!='n');
		  display(root);
		  break;
	 default: 
	   cout<<"\ninvalid option"; 	
    }
    
  return 0;  
		  ///check for height function
}
/************* Function Definations ******************************/
/*
     insert(*parent,data)
     -->this function takes the root node initialy then call the function with parent(instead root)
        reccursively untill we find the exact location in BST
*/
int insert(Node * n,int datapart)
{   Node * leaf;
    int heightLeft,heightRight;
	if(n==NULL)
	{    // IF tree is empty
	    root=new Node;
		root->data=datapart;
		root->left_child=NULL;
		root->right_child=NULL;
		root->balance_factor=0;
		root->parent=NULL;
	    return 0;
	}
	if(n->left_child==NULL&&n->data>datapart||n->right_child==NULL&&n->data<datapart)
	{    //Allocate memory to new leaf
	  leaf=new Node;
	  leaf->data=datapart;
	  leaf->left_child=NULL;
	  leaf->right_child=NULL;
	  leaf->balance_factor=0;
	  leaf->parent=n;
	  if(n->left_child==NULL&&n->data>datapart)
	  n->left_child=leaf;
	  else
	  n->right_child=leaf;
	  modifyBalanceFactor(n);	
	  }
	else if(n->data>datapart)
	{
	insert(n->left_child,datapart);
	}
	else if(n->data<datapart)
	{
	insert(n->right_child,datapart);}
	else if(n->data==datapart)
	cout<<"\nERROR 403 I assume no reduntancy(LINKED LIST)";
  
}
 // Insert Function for Array
int insert(int index,int datapart)
{
	if(avlTree[index]==0)
	{           //means we find a place for inserting the datapart
		avlTree[index]=datapart;
		                       //Modify balance factor
	    modifyBalanceFactor(index);
	}
	else if(avlTree[index]>datapart)
	{  //find place in left subtree
	    insert(2*index,datapart);
	}
    else if(avlTree[index]<datapart)
	{  //find place in right subtree
	   insert(2*index+1,datapart);	
	   }
	else if(avlTree[index]==datapart)  
	cout<<"\nError 403 I assume no reduntancy(ARRAY)";
}
/*
  height(*node)
    -->This function will take argument of type pointer to stuct Node and
       apply the farmula to compute height of node(argument) recursively
       and return height
       heightOfNode=1+maximum(heightOfNode->leftsubtree,heightOfNode->rightsubtree)
*/
            //linked list implementation
int heightNode(Node * n)
{  int hr,hl,h;
  if(n==NULL)
      return -1;
  hl=heightNode(n->left_child);
  hr=heightNode(n->right_child);
  h=1+(hl>hr?hl:hr);
  return h;
}
         //For Array implementation
int heightNode(int index)
{ int hr,hl,h;
  if(avlTree[index]==0)
      return -1;
  hl=heightNode(2*index);
  hr=heightNode(2*index+1);
  h=1+(hl>hr?hl:hr);
  return h;
}         
/*
     display(*node)
	   -->This function takes the root as argument and display in INORDER TRAVERSAL
	      and also BALANCE FACTOR of each node 
*/
    //for Linked List implementation
int display(Node * n)
{   
	if(n!=NULL)
    {   display(n->left_child);
    	cout<<"\ndata->"<<n->data<<"\tBalance Factor->"<<n->balance_factor;
    	display(n->right_child);
    }
}
    // Display for Array
int display()
{  int index=1;
   while(index<15)
   { // if(avlTree[index])
     cout<<"\n"<<avlTree[index]<<"\t"<<balanceFactor[index];
     index++;
   }
  	
}    
/*  modifyBalanceFactor(*node)
     -->This function takes the pointer to node for which BALANCE FACTOR is to be modified 
        and (obviously) the all ancestors's BALANCE FACTOR is to be modified recursively 
*/
int modifyBalanceFactor(Node *n)
{
	if(n==NULL)
	   return 0;
	 n->balance_factor=heightNode(n->left_child)-heightNode(n->right_child);
	 if(abs(n->balance_factor)>1)       
	{  if(n->balance_factor>0)  //means +ve
	    {   if(n->left_child->balance_factor==1)        // Means LEFT rotation
	        {      LLrotation(n);        // LL rotation
	        	
	        }
	        else{  LRrotation(n);         //LR rotation
	        }
	           
	    	 
		 }
		 else
		 {                         //Means RIGHT rotation
		   if(n->right_child->balance_factor==1)        
	       {  RLrotation(n);             // RL rotation
	        	
	        }
	        else{          //RR rotation
	          RRrotation(n);
			}
		 
		 }                                                  
	 	 n->balance_factor=heightNode(n->left_child)-heightNode(n->right_child);
	    	}
	    	modifyBalanceFactor(n->parent);  

}
        //Modify BalanceFactor for Array  
int modifyBalanceFactor(int index)
{  int defectedIndex;
	if(index==1)
	{ return 0;
	}
	balanceFactor[index]=heightNode(2*index)-heightNode(2*index+1);
	if(abs(balanceFactor[index])>1)
    {    //Convert Array Data into Linked List 
          //defectedIndex=index;
           convertArray();
	       convertLinkedList(1,root);
	    }
	    
		   modifyBalanceFactor(index/2);  
    
}
int convertArray()
{   int index=1;
	while(index<15)
	{   if(avlTree[index]) 
		insert(root,avlTree[index]);
		index++;
	}
	index=1;
	while(index<15)
	{
		avlTree[index]=0;
		index++;
	}
}
int convertLinkedList(int index,Node *n){
	if(n!=NULL){
	avlTree[index]=n->data;
	balanceFactor[index]=n->balance_factor;
	convertLinkedList(2*index,n->left_child);
	convertLinkedList(2*index+1,n->right_child);
	}
	                                                                                                                
}
/**********Rotation Function ****************/
int LLrotation(Node *n)
{   cout<<"\nll rotation called";
    Node *left,*leftRight,*expr; 
	left=n->left_child;
	if(n==root)
	 { root=n->left_child;
	 }
	 else 
	 { expr=n->parent->right_child;
	   if((expr)==n)
	   {
	        (n->parent)->right_child=left;
        }
        else{
        	(n->parent)->left_child=left;
        }
	 }
	 left->parent=n->parent;
	 leftRight=left->right_child;
	 left->right_child=n;
	 n->left_child=leftRight;
	 if(leftRight!=NULL)
	 {
	 leftRight->parent=n;}
	 n->parent=left;
	left->balance_factor=heightNode(left->left_child)-heightNode(left->right_child);
	n->balance_factor=heightNode(n->left_child)-heightNode(n->right_child);
}
int RRrotation(Node *n)
{   cout<<"\nRR rotation called";
	Node *right,*rightLeft,*expr;
	right=n->right_child;
	if(n==root)
	{ 
	root=root->right_child;
	}
	else
	{
	  expr=n->parent->left_child;
	  if((expr)==n){
	  (n->parent)->left_child=right;
      }
	  else
	  {
	  (n->parent)->right_child=right;
      }
	}
	right->parent=n->parent;
	rightLeft=right->left_child;
	right->left_child=n;
	n->right_child=rightLeft;
	if(rightLeft!=NULL)
	{ rightLeft->parent=n;
     }
	n->parent=right;
	right->balance_factor=heightNode(right->left_child)-heightNode(right->right_child);
    n->balance_factor=heightNode(n->left_child)-heightNode(n->right_child);
}

int LRrotation(Node *n)
{ 
  cout<<"\nLR rotation called";
  Node * left;
  left=n->left_child;
  RRrotation(left); //------>something wrong here
  LLrotation(n);
}
int RLrotation(Node * n)
{  cout<<"\nRL rotation called";
   Node * right;
   right=n->right_child;
   LLrotation(right);
   RRrotation(n);
}
int deletion(Node *n,int data)
{  Node * InorderSuccessor,*saveParent;
   Node *searchNode=search(n,data);
   if(searchNode==NULL){
   	cout<<"\ndata is to be deleted is not found ";
    return 0;
   }
   // Delete and must keep that is a BinarySearch Tree property is hold 
     if(searchNode->parent==NULL)
     {  //delete ROOT and modify root
     	
     }
	 if(searchNode->left_child==NULL&&searchNode->right_child==NULL)
	 {  
	     if(searchNode==root)
	    {
	    	root=NULL;
	    }
	    //Means that it is a leaf Node and delete it directly
	   else if((searchNode->parent)->left_child==searchNode)
	    { //means that searchnode is present as left child of parent
	    	(searchNode->parent)->left_child=NULL;
		}
	    else{
	    	(searchNode->parent)->right_child=NULL;
	    }
	    }
	 else if(searchNode->left_child==NULL||searchNode->right_child==NULL)
	 {  //Means that it have one child
	 	if(searchNode==root)
	 	{  //handle carefully because can't dereffered the null pointer
	 		root=searchNode->left_child!=NULL?searchNode->left_child:searchNode->right_child;
	 	}
		else if((searchNode->parent)->left_child==searchNode)
	 	{ //hey i  am in left of my parent 
		 (searchNode->parent)->left_child=searchNode->left_child!=NULL?searchNode->left_child:searchNode->right_child;
	 	  
		 }
	 	else
	 	{
	 	  (searchNode->parent)->right_child=searchNode->left_child!=NULL?searchNode->left_child:searchNode->right_child;
	 	}
	 
	 }   
     else
	 {  /*  means the search Node having the two child
	 	             1. Find inorder successor    2.delete successor from its place  
	 	             3. just copy the data(successor) to the node(to be deleted)  */
		 InorderSuccessor=findInorderSuccessor(searchNode);
		 searchNode->data=InorderSuccessor->data;
		 saveParent=InorderSuccessor->parent;            //problem
		 deletion(InorderSuccessor,InorderSuccessor->data);
		 modifyBalanceFactor(saveParent);
		 return 0;			    
	 }  
	 modifyBalanceFactor(searchNode->parent);
	 delete searchNode;
		return 0; 
}
Node *search(Node * n,int localData)
{  Node * localNode;
   if(n==NULL) 
   return NULL; 
   if(n->data==localData)
   return n;
   else if(n->data>localData)
   localNode=search(n->left_child,localData);
   else if(n->data<localData)
   localNode=search(n->right_child,localData);	
   return localNode;	
}
Node * findInorderSuccessor(Node * n)
{  Node * save;
   save=n->right_child;
   while(save->left_child!=NULL)
   { save=save->left_child;
   }
	return save;
	}
	/***
	This function need arise is due to getch() function is not defined in standard library as 
	conio.h is not the standard header File so to make the getchxy() work we have or redefined the function
	****/ 
void gotoXY(int x, int y) 
{ 
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
/***This function just draw the AVL tree as what is the left child and right child with help of . operator and 
    variable position with gotoxy ****/ 

int draw(Node *ptr, int row, int col)
{
   if(ptr != NULL)  {
    int i, j;
    gotoXY(col, row);
    printf("%d", ptr->data);
    if(ptr->left_child != NULL)  {
      for(i=row+1, j=col-1; i <= row+3; i++, j--)  {
	gotoXY(j, i);
	printf(".");
      }
    }
    draw(ptr->left_child, row+4, col-5);
    draw(ptr->right_child, row+4, col+5);
    if(ptr->right_child != NULL)  {
      for(i=row+1, j=col+1; i <= row+3; i++, j++)  {
	gotoXY(j, i);
	printf(".");
       }
    }
  }
}
