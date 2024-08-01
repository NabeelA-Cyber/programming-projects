#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main()
{
	int num1,num2,sum;
	char y = 'y';	
	srand(time(0));
	while(y == 'y'|| y == 'Y')
	{
		
		num1 = rand()%1000;
		num2= rand()%1000;
		cout <<"  "<<num1 << endl; 
		cout << "+ " << num2 << endl; 
		cout <<"--------"<<endl;
		cin >> sum;
		if(sum == num1+num2)
			cout <<"congratulations" << endl;
		else( cout <<"incorrect cancer, the correct answer is "<< num1+num2 << endl); 	
	 
		
		cout << "do you want to continue? ";
		cin >> y;
	}
	return 0;
}