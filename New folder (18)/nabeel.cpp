#include <iostream> 
using namespace std;
int main()
{
	int num,sum = 0;
	cout << " enter positive integer value: ";
	cin >> num;
	for(int i = 1; i <= num; i++)
	{
		sum = sum + i;	
	}
	cout << " sum is: "<< sum << endl;
	
	return 0;
}