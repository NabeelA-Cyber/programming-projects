#include <iostream>
using namespace std;
int stringlength(char *str);
const int SIZE = 80;
int main()
{
	
	char line[SIZE],str[SIZE];
	int firstchar = 0, first =0;
	char c;
	cout << "Enter a sentance and I will translate it to pig Latin: ";
	 cin.get (line,SIZE);
	for(int i =0; i<SIZE;i++)
	{
		if(line[i] != ' '){
			firstchar = i;
			break;
		}
	}
	int j = firstchar;
	first = firstchar;
	for(int i = firstchar; i<SIZE; i++)
	{
		if(i == first)
		{
			c = line [i];
		}
		else if(line[i] != ' ' )
		{	
			str [j] = line [i]; 
			j++;
		}
		else{
		str [j++] = c;
		str [j++] = 'a';	
		str[j++] = 'y';
		str [j++] = ' ';
		first = i+1;
		}
	}	
	str [j++] = c;
	str [j++] = 'a';
	str [j++] = 'y';
	str [j] = '\0';
	cout << str << endl;
		return 0;
}

