#include <iostream>
using namespace std;
//Hosein ghasemizade

int main() {
	
//	Define inputs and variables
	int count,num,sum;
	float avg;
	
	cout<<"please enter the counter :";
//	Get input
	cin>>count;
//	loop definition
	for (int i = 1; i <= count; i++)
	{
		cout<<"enter the value "<<i<<" :";
		cin >> num;
		sum += num;
	}
	avg = sum / count;
	cout<<"average of values :"<<avg;
	return 0;
}