/*
 *This program demonstrate the use of a vector
 *Vector is a dynamic array that can grow dynamically
 *Obviously the momry is allocated from heap
	|1|2|5|12|3|
	 ^v.begin() ^v.end()

	Hence,
		cout<<*v.end();		//dangerous situtation

 *Properties of vector:
	->fast insert/remove at the end:		O(1)
	->slow insert/remove at the middle/beginning:	O(n)
	->slow search:					O(n)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>v;			//v.size() is zero initially
	//Adding elements to the vector v using pushback function
	v.push_back(4);
	v.push_back(1);
	v.push_back(8);			//v.size is 3 now;

					//v[2] is 8 (no range check in this one)
					//v.at(2); is also 8 (throws range_error in case of exception)
	vector<int>::iterator itr1 = v.begin();	//half open [begin, end)
	vector<int>::iterator itr2 = v.end();

	vector<int>::iterator itr = itr1;

//Approach 1 ; recommended traversal 				[UNIVERSAL WAY FOR TRAVERSING A CONTAINER]
	while(itr != itr2){
		cout<<*itr<<endl;
		itr++;
	}
//Approach 2 : however, cantraverse a vector this way as well
	int i;
	for(i = 0; i<v.size(); i++)
		cout<<v[i]<<endl;
//Approach 3 : OR this way
	for(i = 0; i<v.size(); i++)
		cout<<v.at(i)<<endl;

//Approach 4 : C++ 11
/*	for(it: v)
		cout<<it<<endl;
*/

/* Vector is dynamically allocated contiguous array in memory
 * None of other containers provide contiguous data in memory */

	sort(itr1, itr2);	//Remember: Algorithms directly work on iterator, not on elements
	return 0;
}

