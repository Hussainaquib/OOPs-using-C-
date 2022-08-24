// program to find area of Triangle base and height enter by user

#include<iostream>
using namespace std;

float area(float,float);

int main()
{
	float bs,ht;
	// bs -> base of triangle
	// ht -> height of triangle
	
	cout<<"Enter base and height of triangle:";
	cin>>bs>>ht;
	cout<<"Area of triangle is "<<area(bs,ht);
	return 0;
}

float area(float bs,float ht)
{
	return ((bs*ht)/2);
}