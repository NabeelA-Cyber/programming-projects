#include <iostream>
using namespace std;
int main()
{
	int scores[6] = {0,0,0,0,0,0}; 
int input; 

for(int i = 0; i < 5; i++) 
{ 
cout << "What is your score?: "; 
cin >> input; 
scores[input]++;  
} 

// After for loop... 
do 
{ 
    cout << "What is your score (-1 to quit)?: "; 
    cin >> input; 
    if( input != -1) 
        scores[input]++; 
}while( input != -1); 
return 0;
}
 