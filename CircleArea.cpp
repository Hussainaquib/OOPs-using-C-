// program to find area of circle

#include<iostream>
using namespace std;

float area(float);

int main()
{
	float r;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"Area of circle is "<<area(r);
	return 0;
}

float area(float r)
{
	return (3.14*r*r);
}