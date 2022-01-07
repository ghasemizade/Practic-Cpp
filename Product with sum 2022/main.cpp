#include <iostream>

using namespace std;
//Hosein Ghasemizade

//Perform multiplication operations without multiplication operators
int main() {
//	difined input
	int num1;
	int num2;
	int sum;
	cout<<"please enter the first value :";
//	get input
	cin>>num1;
	cout<<"please enter the second value :";
//	get input
	cin>>num2;
//	difined loop
	for (int i = 1; i <= num1; i++)
	{
		sum += num2;
	}
		cout<<sum;
	return 0;
}

