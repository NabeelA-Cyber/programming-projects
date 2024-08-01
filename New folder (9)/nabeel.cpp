#include <iostream>
using namespace std;

int main()
{
	int X = 25, Y = 50, Z = 75;
	int *ptr =nullptr;
	
	cout << "Here is the values of X,Y and Z\n ";
	cout << X << " " << Y << " " << Z << endl;
	
	ptr = &X;
	*ptr +=100;
	
	ptr =&Y; 
	*ptr += 100;
	
	ptr = &Z;
	*ptr += 100;
	
	cout << "Once again, here are the values of X,Y and Z\n";
	cout << X << " " << Y<< " " << Z << endl;
	return 0;
}