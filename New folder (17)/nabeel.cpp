#include <iostream>
using namespace std;
int main()
{
	int weight,distance,dper500,rem;
	double total, price; 
	cout << "what is the weight of the package: " << endl;
	cin >> weight;
	cout << "what is the distance: " << endl;
	cin >> distance;
	dper500 = distance / 500;
	rem = distance % 500;
	
	cout << dper500 << endl;
	cout << rem << endl;
	if ( weight<= 2) price = 1.1;
	if ( weight> 2 && weight<= 6 ) price = 2.2;
	if ( weight> 6 && weight <=10) price = 3.7;
	if ( weight> 10 && weight<= 20) price = 4.8;	
	if ( rem != 0) dper500++;
	total = dper500 * price;
	cout << "The total is: " << total << endl;
	return 0;
}