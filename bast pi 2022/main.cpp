#include <iostream>
using namespace std;

int main ()
{
	// subtitle program
	cout << "This consule app is about for Expansion of Pi number." << endl;
	
	// variables
	double radius, circumference, pi;
	float p = 3.14;
	
	cout << "Enter a number for radius ";
//	get input 
	cin >> radius;
	
	// the operation
	circumference = 2 * p * radius;
	pi = circumference / radius;
	
	// output
	cout << "The expansion of Pi number is = " << pi;
	
	return 0;
}