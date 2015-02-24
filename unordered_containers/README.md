--> C++ 11 introduces UNORDERED ASSOCIATIVE CONTAINERS That includes:
	- Unordered set/multiset
	- Unordered map/multimap

--> The order of the elements is not defined and they may change over the time

--> Internally, an unordered container is implemented using hashtable which is an array of linked list
     
      Buckets	entries
	|*| -->|_|->|_|->|_|
	|*| -->|_|->|_|
	|*| -->|_|
	|*| -->|_|->|_|
	|*| -->|_|->|_|->|_|
	|*|

	each element is used by the hash function to caldulate a value
	and based on that value, the element is inserted into appropriate place (in one of the entries)

-> if you have a fast and effective element, finding an element in the hashtable is very fast,
   it only takes constant time, the fastest among all the containers

 
