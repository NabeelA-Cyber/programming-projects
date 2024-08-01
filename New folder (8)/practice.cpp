#include <iostream>
using namespace std;

int main()
{
	int X = 25;
	int *ptr = nullptr;
	
	ptr = &X;
	cout << "Here is the value in X, printed twice :\n";
	cout << X << endl;
	cout << *ptr << endl;
*ptr = 100;

cout << "Once again, here is the value in X\n";
cout << X << endl;
cout << *ptr << endl;


return 0;
}	