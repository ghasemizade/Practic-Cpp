#include <iostream>
using namespace std;
//Hosein ghasemizade

int main() {
//	define input
	int num;
	int sum;
	cout<<"please enter the number :";
//	take input
	cin>>num;
	sum = 0;
//	define loop
	for(int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	if (sum == num)
	{
		cout<<"yes";
	}
	else 
	{
		cout<<"no";
	}
			
	return 0;
}