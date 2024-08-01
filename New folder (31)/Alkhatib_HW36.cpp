//Author: nabeel Alkhatib
// Date last modified: 4/23/2018
// project name: HW36
#include <iostream>
using namespace std;
int fib(int n){
	if(n==0||n==1)
	{ 
		return n;
	}
	return fib(n-1)+fib(n-2);
}
int main()
{
int n;
cout << "How many elements do you want to display(starting with 0)? ";
cin >> n;
for(int i = 0; i<n;i++)
	cout << fib(i) << " ";
return 0;
}