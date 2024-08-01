#include <iostream>
using namespace std;

int doSomething(int*,int*);

int main() {
	int x = 1 ,y = 2, z;
	
	cout << "Before calling the function doSomething:   ";
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
	
	z = doSomething(&x,&y);
	cout << "After first call to function doSomething:  ";
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
	
	z=doSomething(&x,&y);
	cout << "After second call to function doSomething: ";
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
	return 0;
}



int doSomething(int *x, int *y)
{
	int temp=*x;
	*x = *y * 10;
	*y = temp * 10;
	return *x+*y;
}

