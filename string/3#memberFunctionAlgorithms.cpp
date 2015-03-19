/*
 * Topic	:	Member Function Algorithms: copy, find, compare
 * Author	:	Akash Chaturvedi
 * Instructor	:	Bo Qian
 * Vidoe link	:	https://www.youtube.com/watch?v=avZfl3VoKw0&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb&index=14
 * 
 *
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1 = "abcdefg";
	char buf[20];
	size_t len = s1.copy(buf, 3);	//copy 3 characters from s1 to buf, buf: abc	len: 3
/*COPY FUNCTION*/
	//copy function is the only exception in the string class where 1st number is the size and 2nd is the starting position, in rest of the functions and constructors of string class, 1st parameter is starting position and 2nd is the size
	len = s1.copy(buf, 4, 2);	//buf: cdef,	len: 4
//	cout<<buf;
	

/*FIND FUNCTINOS*/
	s1 = "If a job is worth doing, it's worth doing well";
	//s1 = "giboing";
	size_t found = s1.find("doing");	//found = 17
	found = s1.find("doing", 20);	//this will start searching "doing" from index 20, so it will return the position of 2nd occurance of "doing" in s1 i.e.	//found = 35
	found = s1.find("doing well", 0);	//found = 35
	found = s1.find("doing well", 0, 5);//will find only 5 chars of "doing well" in s1 so it will return 17
	found = s1.find_first_of("doing");	//This will search the first character in s1 that has appeared in this string "doing", here 'o' is found first at index 6 in s1,	found = 6
//	cout<<found<<endl;
	found = s1.find_first_of("doing", 10);	//This will start the searching from position 10 in the s1, 	found = 12
	found = s1.find_first_of("doing", 10, 1); //will look at the first character of "doing" i.e. 'd' in string s1 from position 10,		found = 17

	found = s1.find_last_of("doing");	//found = 39, i.e. starts searching a character that has appeared in string "doing", It starts searching from last in s1.  
	cout<<found<<endl;

	found = s1.find_first_not_of("doing");	//first charcter that has not appered in the string "doing", found: 0

	found =s1.find_last_not_of("doing");	//find the fist charcter that has not appeared in the string "doing", But start searching from last, found: 44


/*COMPARE FUNCTINOS*/
	s1.compare(s2);		//return +ve if (s1>s2), -ve if (s1<s2) and 0 if (s1==s2)
	if(s1>s2){}	//is equivalent to if(s1.compare(s2)>0)
	s1.compare(3,2,s2)	//compare s1 from index 3 and length 2 with s2

	string ss = s1 + s2;	//concatenate s1 and s2
//Note: use of operator overloaded functions (like +, <, >, = etc) is not cheap in case of large strings

	return 0;
}
