#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;
int main()
{
	unordered_set<string> my_unorder_set = {"red", "green", "Blue"};
	unordered_set<string>::iterator itr = my_unorder_set.find("green");	//if it finds the elment then it will return an iterator that points to the searched
										//element, if it doesn't find the element, it will return the iterator that points to 
										//the end of container 
	//Hence, before dereferencing the returned iterator, we are suppose to do the following check
	if(itr != my_unorder_set.end())
		cout << *itr<<endl;

	my_unorder_set.insert("yellow");	//O(1)
	vector<string> v = {"purple", "pink"};
	my_unorder_set.insert(v.begin(), v.end());	
	
	itr = my_unorder_set.begin();
	while(itr != my_unorder_set.end()){
		cout<<*itr<<" "<<endl;
		itr++;
	}

	//hash Table specific APIS
	//1) LOAD_FACTOR: the raio of total # elements/# of buckets
	cout << "load factor is: "<<my_unorder_set.load_factor()<<endl;

	//2) BUCKET: which bucket the element x is stored
	cout << "green is stored in bucket:"<<my_unorder_set.bucket("green")<<endl;

	//3) BUCKET_COUNT
	cout<< "the total number of buckets in the hashtable used by my_unorder_set is: "<<my_unorder_set.bucket_count()<<endl;
	return 0;
}
