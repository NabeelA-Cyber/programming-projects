#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const float waterperyear = 1.5;
	float waterincrease;
	for(int i = 0; i < 25; i++)
	{
		waterincrease = waterincrease + waterperyear; 
		cout << setw(3) << i+1 <<"  "<< fixed << setprecision(1) << waterincrease << endl;
	}
	return 0;
}