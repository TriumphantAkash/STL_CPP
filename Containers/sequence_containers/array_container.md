

int a[3] = {3,4,5};		//Normal array

array<int, 3> a = {3,4,5};	//Array container is a very thin layer around the native array
a.begin()
a.end()
a.size()
a.swap()

2 big limitataion about array container:
1) Size can not be changed
2) array of different size are different types(for e.g. A function that takes an array of 3 size as an argument will not take an array of 4 size as an argument)
