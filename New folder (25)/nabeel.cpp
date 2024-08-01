#include <iostream> 
using namespace std;
int main()
{
	int num = 0, nummax = -100,nummin = 100;
	while( num != -99)
	{
	cout << "enter a series of integers: ";
	cin >> num;
	if(num == -99) break;
	if(num < nummin) nummin = num;  
	if(num > nummax) nummax = num;
	}
	cout << "nummax: " << nummax << endl;
	cout << "nummin: " << nummin << endl;
	return 0;
}