#include <iostream>
using namespace std;

int main() {
	
//	Define a variable
	int num1;
	int num2;
	int product = 1;
	cout << "please enter the first number :";
//	get input1
	cin >> num1;
	cout << "please enter the second number :";
//	get input2
	cin >> num2;
	
//	Definition of condition
	for (int i = num1; i <= num2; i++)
	{
		if (i % 2 == 1)
		{	
			product *= i;
		}
	}
			cout << product;	
			
	return 0;
}