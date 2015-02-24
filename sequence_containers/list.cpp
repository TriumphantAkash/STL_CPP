/*
 *This program demonstrate the use of a list
 *A list is a doubly linked list(each item has 2 pointers: one pointer to the next item, another to the previous)
 *Properties of list:
	->fast insert/remove at any place:		O(1)
	->slow search:					O(n)
	->No random access, no [] operator
	->Additionally, list is slower as compared to vector and deque. Reason behind is that:
	  Vector and deque store the data at contiguous memory location that almost removes the
	  chances of chache miss due to principle of 'locality of reference' which is not in the
	  case of list.
 	
	//List also has a REVOLUTIONARY function called SPLICE
	mylist1.splice(itr, mylist2, itr1, itr2);				//O(1)
	mylist1				mylist2
	|2|3|5|1|6|		|34|32|36|31|29|33|35|
	     ^itr		    ^itr1    ^itr2
	cut mylist2 from itr1 to itr2 and insert in mylist1 at position itr
	|2|3|32|36|31|29|5|1|6|		|34|33|35|
*/

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> mylist = {5, 2, 9};
	mylist.push_back(6);		//{5, 2, 9, 6}
	mylist.push_front(4);		//{4, 5, 2, 9, 6}

	list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2);	//Now itr points to 2 in the list
	mylist.insert(itr, 8)							//It inserts 8 in front of itr i.e. 2, mylist: {4, 5, 8, 2, 9, 6}
										//O(1) faster than vector/deque
	itr++;									//Now itr points to 9
	mylist.erase(itr);							//it erase in constant time O(1) mylist: {4, 5, 8, 2, 6}

	
	return 0;
}

