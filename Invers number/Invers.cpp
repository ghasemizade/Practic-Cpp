#include <iostream>
using namespace std;


int main() {
	int num,digit;
	int i;
	while (true)
	{
		cout<<"please enter the number :";
		cin>>num;
		cout <<"Inverse :";
		do {
			digit = num % 10;
			cout <<digit;
			num /= 10;
		}
		while (num != 0);
	cout<<endl;
	i++;
	if ( i == 5)
	{
		break;
	}
	}
return 0;
}