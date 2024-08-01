// project name : HW34
// Author: Nabeel Alkhatib
// date last modified: 3/27/2018
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string sentence1;
	string file1,file2;
	int count = 1;
	
	cout << "Enter two file names: ";
	cin >> file1;
	cin >> file2;
	ofstream outputfile;			//this line opens the second file	
	outputfile.open(file2.c_str());
	
	ifstream inputfile;
	inputfile.open(file1.c_str()); // This line opens the first file
	
	while (!inputfile.eof())		// this loop copies the content of the first file to the second file and numbers each line
	{	
		outputfile << setw(2) << count ++ << ": ";
		getline(inputfile, sentence1);
		outputfile << sentence1 <<""<< endl;
	}
	inputfile.close();
	outputfile.close();
	return 0;
}