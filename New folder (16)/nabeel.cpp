#include <iostream>
using namespace std;
int main()
{
int num;	
	cout << "Enter the number of books purchased this month: " << endl;
	cin >> num;
	if ( num == 0) cout << " the total number of points for this month is 0\n ";
	if ( num == 1) cout << " the total number of points for this month is 5\n ";
	if ( num == 2) cout << " the total number of points for this month is 15\n ";
	if ( num == 3) cout << " the total number of points for this month is 30\n ";
	if ( num >= 4) cout << " the total number of points for this month is 60\n ";

	return 0;
}