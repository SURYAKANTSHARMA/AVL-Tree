#include <iostream>
#include"myqueue.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Myqueue<string> q;
	q.enqueue("hdddai");
	q.enqueue("suryakant");
	q.enqueue("who are you");
	cout<<q.size()<<endl;
	for(int i=0;i<4;i++)
	cout<<q.dequeue()<<endl;
	return 0;
}
