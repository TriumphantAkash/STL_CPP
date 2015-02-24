/*
 *This program demonstrate the use of a deque
 *Deque can grow both at the end and at the beginning
 *
 *Properties of deque:
	->fast insert/remove at the end/begining:	O(1)
	->slow insert/remove at the middle:		O(n)
	->slow search:					O(n)

*/

#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int>deq;
	deq.push_back(4);
	deq.push_back(6);
	deq.push_back(7);
	deq.push_front(2);
	deq.push_back(3);
//Approach 1 ; recommended traversal 				[UNIVERSAL WAY FOR TRAVERSING A CONTAINER]
	deque<int>::iterator itr1 = deq.begin();	//half open [begin, end)
	deque<int>::iterator itr2 = deq.end();

	deque<int>::iterator itr = itr1;


	while(itr != itr2){
		cout<<*itr<<endl;
		itr++;
	}
	return 0;
}
