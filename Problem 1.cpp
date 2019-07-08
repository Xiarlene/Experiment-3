#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numbers[15], smallest, largest, i;
	double sum = 0;


	for (i = 0; i < 15; i++)
	{
		cout << "Enter elements of the array: " << endl; //will be repeated 15 times to input 15 integers 
		cin >> numbers[i];
	}
	
	largest = numbers[0];
	 
	for(i = 0; i < 15; i++)
	{
		if (largest < numbers[i])
		{
			largest = numbers[i];
		}
	}

	smallest = numbers[0];

	for(i = 0; i < 15; i++)
	{
		if ( smallest > numbers[i])
		{
			smallest = numbers[i];
		}
	}

	for(i = 0; i < 10; i++) 
	{
		sum = sum + numbers[i];
	}

	cout << endl << endl << "The Largest element is: " << largest << endl;
	cout << "The Smallest element is: " << smallest << endl;
	cout << "The total of all the elements is: " << sum << endl;
	cout << "The average of the elements is: " << sum/15 << endl;

	getch();
	return 0;
}
