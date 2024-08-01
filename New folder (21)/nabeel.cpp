#include <iostream>
using namespace std;
int main()
{
	double charge = 2500;
	cout << "year membership fee:\n";
	for(int i = 0; i < 6 ; i++)
	{
		charge = charge * .04 + charge;
		cout << i+1 <<"    " << charge << endl;
	}
return 0;
}