#include <iostream>
using namespace std;

int n = 10;

template< typename T>
T search ( T arr[], T v)
{
	for(int i = 0; i<n; i++)
	if (arr[i] == v)
	{
		return i;
	}
	return -1;
}

int main() 
{
	
	int v = 0;
	
	int arr[n] = {1,2,3,4,5,6,7,8,9,10};
	
	cout << "enter value that you are looking for: ";
	cin >> v;
	
	int k = search (arr,v);
	
	if (k == -1)
	{
		cout << "Number does not exist\n";
		
	}
	else cout << "the value you are looking for is at index: " << k << " in the array" << endl;
	
	return 0;
}
