#include <iostream>
using namespace std;

int n = 3;

template < typename T>
T search(T arr[],T v)
{
	
	for(int i=0; i<3; i++)
	
	if(arr[i]==v)
	{
		return i;
	}
			return -1;
	
}
	
int main()
{
	int v = 0;
	
	int arr[n] = { 1, 2, 3};
	
	while (v != -1)
	{
		cout << "enter value that you are looking for: ";  
		cin >> v;
		if (v != -1)
		{
			int k = search(arr,v);
			cout << "the value you are looking for is: " << k << endl;
		}
	}
	return 0;
	
}