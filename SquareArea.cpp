// program to find area of Square

#include<iostream>
using namespace std;

int area(int);

int main()
{
	int s;
	cout<<"Enter side of square:";
	cin>>s;
	cout<<"Area of square is "<<area(s);
	return 0;
}

int area(int s)
{
	return (s*s);
}