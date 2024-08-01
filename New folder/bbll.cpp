#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char*argv[])
{
	if (argc !=2)
	{
		cout << "usage: a.out<your name>\n\n";
		return 0;
	}
	
	cout << "Hello: " << argv[1] << endl;
	return 0;
	
}