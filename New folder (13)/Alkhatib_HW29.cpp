// Nabeel Alkhatib	
// date last modifed: 3/1/2018
// project name: HW29
#include <iostream>
using namespace std;

int stringLength(char *str);				// Function to compute the length of the string 
bool stringsEqual(char *str1, char *str2);	// Function returns true if the two strings str1 and str2 are the same characters
char* stringTitleCase(char *str);			// Function that will capitalize the first letter of every word in the string 
void stringsSwap(char *str1, char *str2);	// Function swaps the two strings str1 and str2 character by character  

const int SIZE = 80;
int main()
{
char line[SIZE], str[SIZE] = "I am a boy";
	cout <<" Enter a sting 80 characters or less : ";
	cin.getline(line,SIZE);
	cout <<"The length of that string is:"<< stringLength(line) << endl;
	
	if (!stringsEqual(line,str))
		cout << "Our strings are NOT the same!"<<endl;
	else cout << "Our strings are the same\n";	
	cout << "Sentence case: \"" << stringTitleCase(line) << "\"" << endl;
	stringsSwap(line,str); 
	return 0;
}

int stringLength(char *str)
{
	int count = 0;		// count is used to calculate the string length 
	for(int i=0; i<SIZE; i++){
		if(str[i]=='\0') break;		// exits the for loop if reaching the end of the string
		count++;		// count the number of characters 
	}
	return count;
}

bool stringsEqual(char *str1, char *str2)
{
	int lstr1 = stringLength(str1);		// get the length of str1
	int lstr2 = stringLength(str2);		// get the length of str2
	if(lstr1!=lstr2) return false;		// return false if the length of the two strings are not equal 
	for(int i=0; i<lstr1; i++) {
		if(str1[i] != str2[i]) return false;
	}
	return true;
}

char* stringTitleCase(char *str)
{
	int lstr = stringLength(str);
	for(int i=0; i<lstr; i++){
		if(i==0)
			str[0]=toupper(str[0]);
		else if(str[i]== ' '&& i+1<lstr)
			str[i+1]=toupper (str[i+1]);
	}
	return str;
}

void stringsSwap(char *str1, char *str2)
{
		char temp;
		int lstr1 = stringLength (str1);		// get the length of str1
		int lstr2 = stringLength (str2);		// get the length of str2
		int lstr = lstr1 > lstr2 ? lstr2 : lstr1;
		int i,j;
		for(i=0; i<lstr; i++)
		{
			temp = str1[i];
			str1[i] = str2[i];
			str2[i] = temp;
		}
		if(lstr1 < lstr2) 						// if length of str1 is less than the length of str2
		{
			for(j = i; j<lstr2; j++)			// copy what is left in str2 into str1
					str1[j] = str2[j]; 
			str2[i] ='\0';
			str1[j] = '\0';
		}
		else{									// otherwise length of str2 is less than the lenght of str1
			for(j = i; j<lstr1; j++)
				str2[j]=str1[j];				// copy what is left in str1 into str2
			str2[j]='\0';
			str1[i]='\0';
		}
		cout << "your string is now: ";
		cout << str1 << endl;	
}	