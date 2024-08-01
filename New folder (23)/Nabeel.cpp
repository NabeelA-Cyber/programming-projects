#include <iostream>
using namespace std;
int main()
{
	float daysworked,salary = 1;
	cout << "what is the number of days worked? ";
	cin >> daysworked;
	cout << "days salary" << endl;
	cout << "----------------------" << endl;
	cout << "1   1" << endl;
	for( int i=1; i<daysworked ; i++)
	{
		salary = salary * 2;
		cout << i+1 << "   " << salary << endl;
	}
	
	return 0;
}