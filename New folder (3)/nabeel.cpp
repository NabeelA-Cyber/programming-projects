#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string sentance1;  
	string file1,file2;
	
	cout <<" Enter two file names: \n";
	cin >> file1;
	cin >> file2;
	ofstream outputfile;
	outputfile.open(file2.c_str());
	
	
	ifstream inputfile;
	inputfile.open(file1.c_str());
	
	while(inputfile >> sentance1)
	{
		
			
		for(unsigned i = 0; i<sentance1.length(); i++)
		{
			if( i == 0) sentance1[i] = toupper(sentance1[0]);
			else sentance1[i] = tolower(sentance1[i]);
		}
		if(sentance1 [sentance1.length()-1]=='.') outputfile << sentance1 << endl;
		else outputfile << sentance1 << " ";
	}
	inputfile.close();
	outputfile.close();
	return 0;
}