#include <iostream>

//Introduction to template
//Pros: prevents similar code duplication (don't have to write 2 separate functions for double and int)
//Cons: 'Code Bloat' actually different copies of similar functions are formed during compilation

using namespace std;

//a template function
template <typename T>
T square(T x) {
	return x*x;
}

//a template function
template <typename T>
T cube(T x) {
	return x*x*x;
}

//a template class
template <typename T>
class BoVector {
	T arr[1000];
	int size;
public:
	BoVector():size(0) {};
	void push(T x)
	{
		arr[size] = x;
		size++;
	}

	T get(int i)		//this function returns an element at ith imdex in the array
	{
		return arr[i];
	}
	
	int getSize()
	{
		return size;
	}

	void print()
	{
		for(int i = 0; i < size; i++){
			cout<<arr[i]<<endl;
		}
	}
};

template <typename T>		//now defining another function to multiply two BoVectors and return a new BoVector
T operator*(T x, T y)
{
	class BoVector<int>z;
	for(int i=0;i<x.getSize();i++){
		z.push(x.get(i) * y.get(i));
	}
	return z;
}

int main()
{
	cout << square<int>(5) << endl;
	cout << square<double>(5.5) << endl;
	cout << cube<int>(5) << endl;

	class BoVector<int>b1;		//type is <int> here, so, int the class, type T will be replaced with int
	class BoVector<int>b2;	
	b1.push(10);
	b1.push(20);
	b1.push(30);
	b1.push(40);
	b1.push(50);
	b1.print();
	
	b2.push(2);
	b2.push(3);
	b2.push(1);
	b2.push(4);
	b2.push(2);
	b2.print();

	cout<<"printing the multiplication of two vectors"<<endl;
	class BoVector<int>b3;
	//b3 =  multiply(b1, b2);
	b3 = square(b2);
	b3.print();
	return 0;
}
