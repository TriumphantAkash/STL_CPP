/*
 *This program demonstrate the use of set
 *set does not contain duplicates 
 */
#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> myset;
	myset.insert(3);	//myset: {1}
	myset.insert(1);	//myset: {1,3}
	myset.insert(7);	//myset: {1,3,7} insertion takes O(log n) time in set
				//items are automatically inserted during insertion

	set<int>::iterator it;
	it = myset.find(7);	//Now it points to 7, O(log n)
				//sequence containers don't even have find() function
	//cout<<*it;

	pair<set<int>::iterator, bool> ret;
	ret = myset.insert(3);	//duplicates not allowed, so no new element inserted

	if(ret.second == false)
		it = ret.first;	//it now points to the already present 3 element in the set, becasue the insertion was unseccessful

	ret = myset.insert(it, 9);	//myset: {1,3,7,9} 9 was NOT inserted before 'it' i.e. 3 !!!
					//The position where 9 is inserted is not decided by you,
					//it automatically insert an item into its appropriate position
					//wait a second!!!!  Then why are we passing 'it' in insert function??
					//the reason is, by passing a guessed or appropriate iterator, we try to make O(log n) => O(1)
	//Here the insertion of 9 is successful,
	//so ret.first now points to newly inserted item 9 and
	//ret.second is True in this case
	//Note that it is still pointing to 3, we did no change in that

	myset.erase(it);		//It will remove 3 from the set, myset: {1,7,9}
	myset.erase(7);			//we can also remove an item by its value
	//None of sequence containers provide this time of erase

	
	 

	return 0;
}
