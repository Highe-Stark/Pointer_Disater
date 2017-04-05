#include<iostream>

using namespace std;
// see the address of a const which is defined right behind an array of integer.
// disater of pointer
int main()
{
	int a0 = 0;
	int *pa0 = &a0;
	cout << "pa0:\t" << pa0 << "\t" << *pa0 << endl;
	const int a4 = 4;
	int a[3] = { 1,2,3 };

	int *p = a;
	const int *cp = &a4;
	cout << "cp:\t" << cp << "\t" << *cp << "\n"
		<< "p:\t" << p << "\t" << *p << "\n"
		<< "p+1:\t" << p + 1 << "\t" << *(p + 1) << "\n"
		<< "p+2:\t" << p + 2 << "\t" << *(p + 2) << endl;
	*(p + 4) = 5;
	*(p + 5) = 6;
	*(p - 1) = -1;
	*(p - 2) = -2;
	cout << "pa0:\t" << pa0 << "\t" << *pa0 << "\n"
		<< "p-1:\t" << p-1 << "\t" << *(p-1) << "\n"
		<< "p-2:\t" << p-2 << "\t" << *(p-2) << "\n"
		<< "p+4:\t" << p + 4 << "\t" << *(p + 4) << "\n"
		<< "p+5\t" << p + 5 << "\t" << *(p + 5) << endl;
	cout << "cp:\t" << cp << "\t" << *cp << endl;
	cout << "a4:\t" << &a4 << "\t" << a4 << endl;
	return 0;
}