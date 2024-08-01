//Author: nabeel Alkhatib
// Date last modified: 4/23/2018
// project name: HW36
#include <iostream>
using namespace std;
int main()
{
int n,f;
 int x1=0,x2=1;
cout << "How many elements do you want to display(starting wtih 0)? ";
cin >> n;
if(n==0)
{
	cout << n << endl;
	return 0;
}
if(n==1)
{
	cout << n << endl;
	return 0;
}
cout <<"0 1 ";
for(int i=2; i<n; i++)
{
	f=x1+x2;
	cout << f <<" ";
	x1=x2; x2=f;
}
cout << endl;
return 0;
}
	
	
	
	
	
	
	
	