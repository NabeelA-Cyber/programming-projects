// Project name: HW33
// Author name: Nabeel
// Last date modifed: 3/20/2018

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void encrypt(string & s)		// This function is for encrypting the data.
{
	for(int i=0; i<s.length();i++)
		s[i]+=12;
}

void decrypt(string & s)		// This function is for decrypting the data.
{
	for(int i= 0; i< s.length();i++)
		s[i]-= 12;
}
int main()
{
	int choice;
	string sentence1;
	string file1,file2;
	
	cout << "Enter the first file name to read from: ";
	cin >> file1;
	cout << "Enter the second file name to encrypt the data: ";
	cin >> file2;
	ofstream outputfile;
	ifstream inputfile;
	outputfile.open(file2.c_str());
	inputfile.open(file1.c_str());
	
	cout << "Enter 1 to encrypt or 2 to decrypt: ";
	cin >> choice;
	while(choice != 1 && choice != 2)		// this is to validate the data.
	{
		cout << "Unrecognized choice! please, choose between 1 or 2 \n";
		cout << "Enter 1 to encrypt or 2 to decrypt: ";
		cin >> choice;
	}
	while(!inputfile.eof())   // this is to read the data.
	{
		getline(inputfile,sentence1);
		if(choice ==1) encrypt(sentence1);
		else decrypt (sentence1);
		outputfile << sentence1 << endl;
	}
	inputfile.close();
	outputfile.close();
	
	return 0;
}