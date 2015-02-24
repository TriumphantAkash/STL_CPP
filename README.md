# STL_CPP
This repository contains sample programs that demonstrate the use of different type of STL containers

STL library provides a group of modules that is called iterator.
Each container is required to provide a common interface defined by iterator.
Iterator can iterate each item inside the container.

Algorithm------------------------------>container1
Algorithm------------------------------>container2
Algorithm------------------------------>container3
Algorithm------------------------------>container4
Algorithm------------------------------>container5



					|container1|
					|container2|
Algorithm-------->|iterator|----------->|container3|
					|container4|
					|container5|

Algorithm instead of working on containers directly, works on iterator (that is common for each container)

----------------------------------------------------------------------------------------------------------
TYPES OF CONTAINERS:
--------------------

(1) Sequence containers(Array and Linked list)
	- vector			#include <vector>
	- deque(call it dack)		#include <deque>
	- list				#include <list>
	- forward list
	- array

(2) Associative containers(Binary Tree)			[All the elements are always sorted]
	- set, multiset			#include <set>
	- map, multimap			#include <map>

(3) Unordered containers (hash table)
	- unordered set/multiset	#include <unordered_set>
	- unordered map/multimap	#include <unordered_map>


  
