/* C++ Program for Addition, Subtraction, Multiplication, Division
 and Modulus of two numbers */
 
#include <iostream>
using namespace std;
 
int main()
{
	int x, y;
	int sum, difference, product, modulo;
	float quotient;
     
	cout << "Enter First Number\n";
	cin >> x;
	cout << "Enter Second Number\n";
	cin >> y;
     
	// Adding two numbers 
	sum = x + y;
	// Subtracting two numbers 
	difference = x - y;
	// Multiplying two numbers
	product = x * y;
	// Dividing two numbers by typecasting one operand to float
	quotient = (float)x / y;
	// returns remainder of after an integer division 
	modulo = x % y;
     
	cout << "\nSum = " << sum;
	cout << "\nDifference  = " <<difference;
	cout << "\nMultiplication = " << product;
	cout << "\nDivision = " << quotient;
	cout << "\nRemainder = " << modulo;
     
	return 0;
}
