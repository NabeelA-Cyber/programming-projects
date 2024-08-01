//project name: HW32
// Name: Nabeel Alkhatib
//Date last modified: 3/9/2018


#include <iostream>
#include <iomanip>
using namespace std;
struct student
	{
	string name;		// this is the name of student 
	int ID,*tests;		// this is the ID and number of tests score of student
	double average;		// average of the tests done by student
	char grade;			// final grade of student
	};
int main()
{
	int ID,numtests = 0, numstudents = 0;
	student *students = 0;
	
	cout << "How many students? ";
	cin >> numstudents;
	cout << "How many tests per student? ";
	cin >> numtests;
	students = new student[numstudents];
	
	for(int s=0; s < numstudents; s++)		// this loop enters data into the student structure 
	{
		cin.ignore(100,'\n');
		cout << s+1 << ") Enter student name: ";
		getline(cin, students[s].name);
		cout << "Enter student ID: ";
		cin >> students[s].ID;
		students[s].tests = new int[numtests];
	
			int total = 0;
	
		for( int i=0; i< numtests; i++)		// this loop calculates the score and average grade of student
		{
			cout << "\t Tests #" << (i+1)<< ": ";
			cin >> students[s].tests[i];
			total += students[s].tests[i];
		}
		students[s].average = (double)total/(double)numtests;
	}
	for(int s=0; s< numstudents; s++)			// this loop calculates the final grade for student
	{
		cout <<"students name: " << students[s].name << endl;
		cout << "students ID: " << students[s].ID << endl;
		cout <<" The average score is: " << students[s].average << endl;
		if(students[s].average > 90 && students[s].average <= 100) students[s].grade = 'A';
		if(students[s].average > 80 && students[s].average < 90 ) students[s].grade = 'B';
		if(students[s].average > 70 && students[s].average < 80 ) students[s].grade = 'C';
		if(students[s].average > 60 && students[s].average < 70 ) students[s].grade = 'D';
		if(students[s].average< 60) students[s].grade = 'F';
		
	}
	return 0;
}