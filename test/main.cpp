#include <iostream>
#include <ctime>
using namespace std;

unsigned long addall() {
	int i=0;
	unsigned long sum = 0;
		
	while (i<1000000000) {
		sum += i;
		i++;
	}
	return sum;
}

int main() {
	clock_t t1 = clock(), t2;
	unsigned long sum;
	srand(time(0));
	sum = addall();
	cout << "sum=" << sum << endl;
	t2 = clock();
	cout << "Duration = " << t2-t1 << endl;
}