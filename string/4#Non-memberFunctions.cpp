/*
 * Topic	:	Non-member Functions 
 * Author	:	Akash Chaturvedi
 * Instructor	:	Bo Qian
 * Vidoe link	:	https://www.youtube.com/watch?v=8lMAMQZRwQM&index=15&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb
 * 
 *
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
//	cout<<s1<<endl;
//	cin>>s1;
//	getline(cin, s1);	//default delimiter '\n'
//	getline(cin, s1, ';');	//delimiter is ';'

//CONVERTING A NUMBER INTO A STRING
	string s1 = to_string(8);	//convert 8 into a string (converting decimal number)
	s1 = to_string(2.3e7);		//s1: "23000000.000000" (converting float number)
	s1 = to_string(0xa4);		//s1: "164" (converting hexadecimal into a stringi)
	s1 = to_string(034);		//s1: "28" (converting octal number)
	cout<<s1<<endl;

//CONVERTING A STRING INTO A NUMBER (stoi, stol, stof, stod)
	s1 = "190";
	int i = stoi(s1);	//i: 190

	s1 = "190 monkeys";
	
	size_t pos;
	i = stoi(s1, &pos);	//i: 190,	now pos will contain the index of character
				//where stoi function stops processing the string due to not finding a number string, pos: 3
	s1 = "a monkey";
	i = stoi(s1, &pos);	//throws exception of invalid_argument
	i = stoi(s1, &pos, 16);	//look for hexadecimal number due to '16' in last argument, Hence i: 10

//for complex string to number conversions use stringstream OR lexical_cast()
	
	return 0;
}
