#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const float calorriesburnt = 3.6;
	for(int i = 5; i <= 30; i= i+5)
	{
		cout << setw(3) << i << " " << fixed << setprecision(1) << calorriesburnt * i << endl;
	
	
	}
	return 0;
}