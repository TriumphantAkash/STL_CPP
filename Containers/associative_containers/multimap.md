-> multimap is similar to map except the fact that it allows duplicate entries
   so insertion into a multimap is always seccessful


multimap<char, int> mymap;

-> One of the key feature of map/multimap is that the key can not be modified
   The reason behind that is if you change the key in the map/multimap, the order is no more maintained

multimap<char, int>::iterator itr;
(*itr).first = 'q';	//This is not a valid statement




