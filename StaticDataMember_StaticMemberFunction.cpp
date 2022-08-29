// C++ program to implement static data member and static member function

#include <iostream>
using namespace std;
class Demo
{
	private:	
		static int X;
	public:
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
		}
};
//defining
int Demo :: X =10;
int main()
{
	Demo X;
	X.fun();
	
	return 0;
}

