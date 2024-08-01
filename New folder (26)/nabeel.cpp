#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string sentence1;
	string file1,file2;
	
	cout <<" Enter two file names: \n";
	cin >> file1;
	cin >> file2;
	ofstream outputfile;
	outputfile.open(file2.c_str());
	
	
	ifstream inputfile;
	inputfile.open(file1.c_str());
	
	while(inputfile >> sentence1)
	{
		for(unsigned i = 0; i<sentence1.length();i++)
		{
			if(i == 0) sentence1[i] = toupper (sentence1[0]);
			else sentence1[i] = tolower (sentence1[i]);
		}
		
		if(sentence1 [sentence1.length()-1]=='.') outputfile << sentence1 << endl;
		else outputfile << sentence1 << " ";
	}
		inputfile.close();
		outputfile.close();
	
	
	return 0;
}