Common member functions to all the containers:

vector<int>v;
say v: {4, 1, 0}

if(v.empty()){cout<<"Not Possible"<<endl;}	: if return > 0 means it's empty

cout<<v.size();					: returns the size of vector v

vector<int> v2(v);				: elements of v are copied to v2

v.clear()					: remove all items from v (v.size() is 0 now)

v2.swap(v)					: now v2 is empty and v has 3 items

