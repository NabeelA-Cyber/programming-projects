#include <iostream>
using namespace std;
int main()
{
	int X = 25;

	cout << "The address of X is " << &X << endl;
	cout << "The size of X is " << sizeof(X) << " bytes\n";
	cout << "The value of X is " << X << endl;
	return 0;
}