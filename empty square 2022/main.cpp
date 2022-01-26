#include <iostream>
using namespace std;


int main() 
{
//	define variable	
	int side;
	
	cout << "Enter a number for side of the square ";
//	get input
	cin >> side;
	
	// the above side
	for (int i = 0; i < side; i++)
	{
		cout << "* ";
	}
	
	cout << endl;
	
	for (int i = 0; i < side-2; i++)
	{
		cout << "*";
		for (int j = 0; j < 2*side-3; j++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
//	the botton side
	for (int i = 0; i < side; i++)
	{
		cout << "* ";
	}
	return 0;
}
