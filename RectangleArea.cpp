// program to find area of Rectangle

#include<iostream>
using namespace std;

int area(int,int);

int main()
{
	int l,b;
	cout<<"Enter length and breadth of rectangle:";
	cin>>l>>b;
	cout<<"Area of rectangle is "<<area(l,b);
	return 0;
}

int area(int l,int b)
{
	return (l*b);
}