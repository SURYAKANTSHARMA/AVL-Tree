#include <iostream>
#include<string>
#include"mymap.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Mymap<int> m;
	m.add("puppy",10);
	m.add("surya",20);
	cout<<m.getValue("puppy")<<endl;
	cout<< m.getValue("surya")<<endl;
	cout<<m.getValue("hai")<<endl;
	return 0;
}
