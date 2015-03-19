/*
 * Topic	:	Accessing String Charaters
 * Author	:	Akash Chaturvedi
 * Instructor	:	Bo Qian
 * Vidoe link	:	https://www.youtube.com/watch?v=6OCaJbL-kMQ&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb&index=13
 * 
 *
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//single element access
	string s1 = "Akash";
	//s1[2] = 'o';
	s1.at(2) = 'o';
	cout<<s1.at(2)<<endl;
	cout<<s1<<endl;
//	s1[20] = 'x';	//accesses the memory location, undefined behaviour
//	s1.at(20);	//does not access the memory location, throws exception of out_of_range	
	s1.front();	//returns 'A'
	s1.back();	//returns 'h'
	s1.push_back('z');	//append 'z' at the end of string
	s1.pop_back();		//pop off the last character from the string
	s1.begin();	//returns iterator pointing to beginning of string
	s1.end();	//returns iterator pointing to end of string

	//vector is a container very similar to string. However, like vector string does not have push_front() and pop_front()


	//Constructing a string using iterators
	string s3(s1.begin(), s1.begin()+3);	//s3: Aka
	

	//RANGED ACCESS:	1)Assign, 2)append, 3)insert, 4)replace
//1)Assign
	string s2 = "Dragon Land";
	s1.assign(s2);	//same as s1 = s2;
	s1.assign(s2, 2, 4);	//s1: "agon"
	s1.assign("Wisdom");	//s1: "Wisdom"
	s1.assign("Wisdom", 3);	//s1: "Wis"
//	s1.assign(s2, 3);	//does not compile
	s1.assign(3, 'x');	//s1: "xxx"
	s1.assign({'a','b','c'});	//s1: abc
	
//2)Append
	s1.append(" def");	//s1: abc def

//3)Insert
	s1.insert(2, "mountain", 4);	//this will insert 4 chars of "mountain" into s1 at position 2, s1: abmounc def

//4)Replace
	s1.replace(2, 5, s2, 3, 3);	//replace a portion of string inside s1, starting at position 2 and size 5, replace it with a portion of s2 starting at position 3 and size of 3
					//s1: abgon def

//5)Erase
	s1.erase(1, 4);			//s1: a def
	cout<<s1<<endl;
//6)substring
	s2.substr(2, 4);		//this will return "agon"

//7)C string
	s1 = "abc";
	s1.c_str();			//return "abc\0"
	s1.data()			//returns "abc\0" in C++11 but returns "abc" in previous C++ versions

//8)swap
	s1.swap(s2);			//swaps the 2 strings s1 and s2 
	return 0;
}


