#include <iostream>
using namespace std;


int main() {
//	difine input
	int num1;
	int num2;
	int mod;
	int d;
	cout << "please enter the first number :";
//	get input
	cin >> num1;
//	get input
	cout << "please enter the second number :";
	cin >> num2;
	
	mod = num1;
	d = 0;
//	define loop
	for (int i = 0; ; i++)
	{
		if (mod >= num2)
		{
			d++;
			mod -= num2;
		}
		else
		{
			break;
		}
	}
	cout<<"Divisible by :"<<d<<endl<<"left over :"<<mod;
	
	return 0;
}