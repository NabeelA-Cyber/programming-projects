#include <iostream>
using namespace std;

int main()
{
	int X = 25;
	int *ptr = nullptr;
	
	ptr = &X;
	cout << "The value in X is " << X << endl;
	cout << "The address of X is " << ptr << endl;
	return 0;
}