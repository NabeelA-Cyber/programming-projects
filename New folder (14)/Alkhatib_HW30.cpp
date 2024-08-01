#include <iostream>
using namespace std;
int stringLength(char *str);
int stringWord(char *str);
const int SIZE = 80;

int main()
{
	int lstr,wstr;
	char line[SIZE];
	cout << "Input a string 80 characters or less: ";
		cin.getline(line,SIZE);
		lstr = stringLength(line);
		cout << "The length of the string is:" << lstr << endl;
			wstr = stringWord(line);
			cout << "number of words : " << wstr << endl;
			double avg;
			avg = static_cast <double> (lstr)/wstr;
			cout << "average letter per word : " << avg <<endl;
			return 0;
}

int stringLength(char *str)
{
	int count = 0;
	for(int i=0; i<SIZE; i++){
		if(str[i]=='\0') break;
		count++;
	}
	return count;
}

int stringWord(char *str)
{
	int w = 0;
	int firstchar = 0;
	for (int i=0; i<SIZE; i++)
		if(str[i]!= ' '){
			firstchar = i;
				break;
		}
	for (int i= firstchar; i<SIZE; i++){
		if (str[i]== '\0'){
			w++;
			break;
		}
		if (i>0 && str[i]==' ' & str[i-1]!= ' ')
			w++;
	}
	return w;	
}