#include <iostream>
using namespace std;
int main()
{
	int speed,hours, distance;
	cout << "What is the speed? ";
	cin >> speed;
	cout << "How long did it take? ";
	cin >> hours;
	cout << "hours distance traveled" << endl;  
	cout << "--------------------------------" << endl;
	for(int i=0; i<hours ; i++)
	{
		distance = speed * (i+1);
			cout << i+1 <<"     "<< distance << endl;
	}	
	return 0;
}