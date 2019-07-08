#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i;
   
    int province_A[7];
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province A, Day " << i + 1 << ": ";
        cin >> province_A[i];
    }
    
    int province_B[7];
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province B, Day " << i + 1 << ": ";
        cin >> province_B[i];
    }
    
    int province_C[7];
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province C, Day " << i + 1 << ": ";
        cin >> province_C[i];
    }
    
    cout << "  " << endl;
    
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province A, Day " << i + 1 << " = " << province_A[i] << endl; 
    }
    
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province B, Day " << i + 1 << " = " << province_B[i] << endl; 
    }
    
    for (int i = 0; i < 7; i++) 
	{
        cout << "Province C, Day " << i + 1 << " = " << province_C[i] << endl; 
    }
    
    getch();
    return 0;
}