/*
 * Topic	:	Constructor and Size
 * Author	:	Akash Chaturvedi
 * Instructor	:	Bo Qian
 * Vidoe link	:	https://www.youtube.com/watch?v=JqXAcD1UfXM&index=12&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb
 * 
 *
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Constructors
	string s1("Hello");
//	cout<<"size of Hello"<<s1.size()<<endl;
//	cout<<"capacity of Hello"<<s1.capacity()<<endl;
	string s2("Hello", 3);	//s2 contains first 3 characters of Hello i.e. Hel
	string s3(s1);		//copy constructor
	string s4(s1, 2);	//Here 2 is the starting position in s1 from where you want to copy | s3: llo
	string s5(s1, 2, 2);	//first 2 is starting position, 2nd 2 is size, s5: ll
	string s6(5, 'a');	//s5: aaaaa
	string s7({'a','b','c'});	//s7: abc



	//size
	s1 = "Goodbye";
	s1.size(); s1.length();	//synonymous functions, do exactly same thing, both returns 7
	s1.capacity();		//returns size of storage space currently allocated to s1,
				//capacity is always greater than the size/length
	s1.reserve(100);	//capacity is changed using reserve, this will allocate 100 char space to s1
	s1.reserve(5);		//reduce capacity of string (mind it, does not reduce size)
	//this will not chage s1, s1 will remain  "Goodbye" and size will remain 7
	//mid it that reserve changes the capacity upto the size but not lower than that
//	cout<<s1<<endl;
//	cout<<s1.capacity()<<endl;
	s1.shrink_to_fit();	//shrink the capacity to hold the content
	cout<<s1<<endl;
	
//	s1.resize(9);		//s1 padded with null chars s1: Goodbye\0\0
	s1.resize(12, 'x');	//s1: Goodbye\0\0xxx
//	cout<<s1.size()<<endl;
//	cout<<s1<<endl;
	s1.resize(3);		//s1: Goo
//RESIZE CHANGES THE CONTENTS OF THE STRING BUT RESERVE DOES NOT

	return 0;
}

