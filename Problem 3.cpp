#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, x, size;
	char input[15];

	cout << "Enter Array Elements: ";
		cin >> input;


	for (i = 0; input[i] != '\0'; i++)
	{
		size = i;
	}


	x = i - 1;
	i = 0;


	while (input[i] > input[x])
	{
		char temp = input[i];
		input[i] = input[x];
		input[x] = temp;
		i++;
		x--;
	}

	cout << "Elements Reversed: ";
	for (i = 0; i <= size; i++)
	{
		cout << input[i];
	}

	cout << " " << endl;
	cout << "Array Size: " << size + 1;


	getch();
	return 0;
}
