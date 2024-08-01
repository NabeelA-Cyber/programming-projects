//Project name HW38
//Author: Nabeel alkhatib
//date last modified: 4/25/2018
#include <iostream>
using namespace std;
int count = 0;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "\n Move "<< count <<". Moving disk 1 from rod " << from_rod << " to rod " << to_rod;
        return;
    }
	count++;
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    cout << "\n Move "<< count <<". Moving disk " << n <<  " from rod " << from_rod << " to rod " << to_rod;
	count++;
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
 
int main()
{
	int n;
	cout << "how many disks on peg? " << endl;
		cin >> n;
    count++;
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
	cout << endl;
	cout << endl;
	cout <<"disks are now in order"<< endl;
	cout << "it took "<< count<<" moves"<< endl;
	cout << "Thank you!"<<endl;
    return 0;
}