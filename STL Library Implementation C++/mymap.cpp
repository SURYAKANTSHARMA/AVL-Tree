#include "mymap.h"
template<typename valType>
Mymap<valType>::Mymap()
{  for(int i=0;i<NumBuckets;i++)
    buckets[i]=NULL;
}
template<typename valType>
Mymap<valType>::~Mymap()
{  //clean all the buckets;
    for(int i=0;i<NumBuckets;i++)
    {  cell* del =buckets[i],*pre;
	       while(del!=NULL){
	   	      pre=del;
	   	      del=del->next;
	   	      delete pre;
    	    }
    }
}
template<typename valType>
void Mymap<valType>::add(string key,valType v)
{
	int hkey=hashFunction(key);
    cell * T=findCell(key,hkey);
    if(T!=NULL)
	 T->val=v;
	 else
	 {  cell * n=new cell;
	    n->key=key;
	    n->val=v;
	    if(buckets[hkey]!=NULL)
	    n->next=buckets[hkey];
	    else
	    n->next=NULL;
	    buckets[hkey]=n;
     }
}
template<typename valType>
valType Mymap<valType>::getValue(string key)
{
	int hkey=hashFunction(key);
	cell *  ptr =findCell(key,hkey);
	if(ptr!=NULL)
	return ptr->val;
	else
	cout<<"\nError : key not Found";
}

template<typename valType>  // in it don't know about the cell type so class name is also written
typename Mymap<valType>::cell* Mymap<valType>::findCell(string keys,int hkey)
{
	cell* ptr=buckets[hkey];
	while(ptr!=NULL){
		if(ptr->key==keys)
		return ptr;
		ptr=ptr->next;
	}
	return NULL;
}
const int multiplier= 1004117991;
template<typename valType>
int Mymap<valType>::hashFunction(string s){
	//map string key -->hkey(0--99)
	unsigned long hashCode=0;
	for(int i=0;i<s.length();i++)
	{  hashCode=hashCode*multiplier+(int)s[i];
	}
	hashCode=hashCode%NumBuckets;
	return hashCode;
}
