// Nabeel Alkhatib
// last date modified:3/1/2018
// project name: HW28
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>
using namespace std;

const int MAX_ELEMENTS = 40000;

// Function prototypes
void swap(int *myArray, int index1, int index2);
void bubbleSort(int *values, int size);
void selectionSort(int *values, int size);
void displayArray(int *values, int size);

int main()
{
	srand(time(0));
	int values_bubble[MAX_ELEMENTS];    // array to store numbers for bubbleSort
	int values_selection[MAX_ELEMENTS];  // array to store numbers for selectionSort

	int num;
	cout << "How many elements in the array? ";
	cin >> num;

	if (num > MAX_ELEMENTS)
	{
		cout << "ERROR: Too many elements!" << endl;
		return -1;
	}

	for (int i=0; i<num; i++)
	{
		values_bubble[i] = 1 + rand() % num;  // storing random numbers in the array  
		values_selection[i] = values_bubble[i];	// storing random numbers in the array 
	}

	bubbleSort(values_bubble, num);	// calling bubble Sort 

	selectionSort(values_selection, num); // calling selection Sort
	return 0;
}

void swap(int *myArray, int index1, int index2) {
	int temp = myArray[index2];
	myArray[index2] = myArray[index1];
	myArray[index1] = temp;
}

void bubbleSort(int *values, int size)
{
	int count = 0; //count is used for counting the number of exchanges
	cout << "BUBBLE SORT" << endl;
	cout << "Before sorting:" << endl;
	displayArray(values, size);

	// Sorting algorithm...
	for (int maxElm = size - 1; maxElm > 0; maxElm--) {
		for (int index = 0; index < maxElm; index++) {
			if (values[index] > values[index + 1]) {
				swap(values, index, index + 1);
				count++; //count the number of exchanges
			}
		}
	}
	// ...Sorting algorithm

	cout << "After sorting, number of exchanges :" << count << endl;
	displayArray(values, size);
}
void selectionSort(int *values, int size)
{
	int count = 0; //count is used for counting the number of exchanges
	cout << "SELECTION SORT" << endl;
	cout << "Before sorting:" << endl;
	displayArray(values, size);

	// Sorting algorithm...
	int i, j, iMin;
	for (j = 0; j < size - 1; j++) {
		iMin = j;
		for (i = j + 1; i < size; i++) {
			if (values[i] < values[iMin]) {
				iMin = i;
			}
		}
		if (iMin != j) {
			swap(values, j, iMin);
			count++; //count the number of exchanges
		}
	}
	// ...Sorting algorithm

	cout << "After sorting, number of exchanges : " << count << endl;
	displayArray(values, size);
}

void displayArray(int *values, int size)
{
	for (int i = 0; i < size; i++)
		cout << values[i] << " ";
	cout << endl;
}