#include <iostream>
using namespace std;
//Hosein ghasemizade 

int main() {
//	variable defining
	int num;
	cout <<"please enter the number :";
//	input difining
	cin >> num;
	cout<<"Divisor :";
//	loop difining
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout<<i<<",";
		}
	}
	return 0;
}