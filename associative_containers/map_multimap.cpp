/*
--> As we know that associative containers are typically implemented with binary tee
and are always sorted.
--> However, sometime people don't want to sort them according to their value
    they want to sort them according to a key. So we have a key and value pair
--> This is why we have map/multimap

--> Map/Multimap have exactly the same interface as set/multiset EXCEPT the fact that each element in map/multimap is a pair of <key,value> rather than simple value
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char, int> mymap;
	mymap.insert(pair<char, int>('a', 100));
//	mymap.insert(make_pair('a', 100));
	mymap.insert(pair<char, int>('a', 100));

	map<char, int>::iterator it = mymap.begin();
	mymap.insert(it, pair<char, int>('b', 300));	//it is a hint to reduce the insertion RT O(log n) => O(1)

	it = mymap.find('z');			//O(log n)

	//showing contents
	for(it = mymap.begin(); it != mymap.end(); it++){
		cout<<(*it).first<<" : "<<(*it).second<<endl;
	}
	return 0;
}
