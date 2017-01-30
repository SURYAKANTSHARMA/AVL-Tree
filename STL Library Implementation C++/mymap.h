#ifndef MYMAP_H
#define MYMAP_H
using namespace std;

#include<string>
template<typename valType>
class Mymap
{
	public:
		Mymap();
		~Mymap();
		void add(string key,valType e);
	    valType getValue(string key);
	protected:
		int const static NumBuckets=99;
		struct cell{
			string key;
			valType val;
			cell * next;
		};
	   cell * buckets[NumBuckets];
       int hashFunction(string key);
       cell* findCell(string key,int hkey);
};
#include"mymap.cpp"
#endif
