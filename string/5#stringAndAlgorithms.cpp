/*
 * Topic	:	Member Function Algorithms: copy, find, compare
 * Author	:	Akash Chaturvedi
 * Instructor	:	Bo Qian
 * Vidoe link	:	https://www.youtube.com/watch?v=Z4HOLxIkpj0&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb&index=16
 * 
 *
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s1 = "variety is the spice of life";

/* COUNT */
	//counts the number of occurances of 'e'
	int num = count(s1.begin(), s1.end(), 'e');
//	cout<<num<<endl;
	
	//if we want to count the occurance of all the characters from a tp e
	num = count_if(s1.begin(), s1.end(), [](char c){ return (c<='e' && c >= 'a');} );//6
//	cout<<num<<endl;

/* SEARCH CHARACTER/S */
	//serach consecutive two characters
	s1 = "Goodness is better than beauty.";
	
	string::iterator itr = search_n(s1.begin(), s1.begin()+20, 2, 's');	//itr -> first 's'
	cout<<*itr<<endl;

/* ERASE CHARACTER/S */
	s1.erase(itr, itr+5);		//s1: "Goodne better than beauty"
	cout<<s1<<endl;

/* INSERT */
	s1.insert(itr, 3, 'x');		//s1: "Goodnexxx better than beauty"
	cout<<s1<<endl;

/* REPLACE */ //(string member function replace(), replaces substring, while algorithm replace(), replaces characters)
	s1.replace(itr, itr+3, 3, 'y');	//rplace 3 chars starting from itr with "yyy"
	replace(s1.begin(), s1.end(), 'e', ' ');	//will replace all 'e' with spaces

/*IS_PERMUTATION*/
	string s2;
	is_permutation(s1.begin(), s1.end(), s2.begin());	//will test if s1 is permutation of s2

/*TRANSFORM*/
	transform(s1.begin(), s1.end(), s2.begin, [](char c){			//This will change all the characters less than n into a and rest of chars to z
										//and save the results to s2 (we uses a lambda funtion here in thiis transformation) 
							if(c<'n')
								return 'a';
							else
								return 'z';
							});

/* ROTATE */
	s1 = "abcdefg";
	rotate(s1.begin(), s1.begin()+3, s1.end());	//this will rotate s1 in such a way that s1.begin()+3 becomes the first character	s1: defgabc
	

/*OTHER STRING CLASSES*/
	string s;
	u16string s1;	//string of 16 bit chars(char16_t)
	u32string s2;	//string of 32 bit chars(char32_t)
	wstring s3;	//string of wide characters (wchar_t)
//most of the function we discussed also applies to these specific classes of strings
	
	return 0;	
}
