//Project name:HW26
 
// author: Nabeel Alkhatib
 
// Date last modified: 3/1/2018
 
// The first output line shows you the number the person has chosen
 
// The second output line shows the address of the number you chose
 
// The third output line shows what value is at the address in the second output
 
// The fourth output shows the pointer contents
 
// The fifth output shows the pointers address
 
// The difference between * and & is that the asterisk is used to indicate what a item points to  is and & is used to assign a variable to a pointer variable.  

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello world! This is Scott!" << endl;
	int num;
	cout << "please enter a number " << endl;
	cin >> num;
	
	int *myptr;
	myptr = &num;
	
	// *mypter = 42;
	
	cout << "you entered the number (num) : " << num << endl;
	
	cout << "address of num (&num) : " << &num << endl;
	
	cout << "myptr contents/value at address (*myptr) : " << myptr << endl;
	cout <<"myptr contents: (myptr) : " << myptr << endl;
	cout <<"myptr address: (&myptr) : " << &myptr << endl;

return 0;
}	