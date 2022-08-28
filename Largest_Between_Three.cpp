// C++ Program to Find Largest of Three Numbers Using Functions

#include <iostream>
using namespace std;

// User-defined function
int LargestNumber(int a, int b, int c)
{
	int max;
    	if(a >= b && a >= c)
	{
		max = a;
	}
	else if(b >= a && b >= c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	return max;
}

int main(){
    int num1, num2, num3, largest;
    
    // Taking input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    
    // Calling out function
    largest = LargestNumber(num1, num2, num3);
    
    // Display result
    cout << "Largest number is: " << largest << endl;
    
    return 0;
}