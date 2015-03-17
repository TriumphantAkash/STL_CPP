-> multiset is similar to set except the fact that it allows duplicate entries
   so insertion into a multiset is always seccessful


multiset<int> myset;

-> One of the key feature of set/multiset is that the value of an element can not be modified
   The reason behind that is if you change the element in the set/multiset, the order is no more maintained

multiset<int>::iterator itr;
*itr = 10;	//This is not a valid statement

/* Properties:
 * Fast search O(log n)
 * traversing is slow(same as list) compared to vector and deque
   This is due to 'locality of reference' in memory, more cache misses
 * No random access (no [] operator)
 */
