#include <iostream>
using namespace std;
//Hosein Ghasemizade 

int main() {
//	define input 
	int length, width;
	
	cout <<"please enter the length :";
//	get input length
	cin >> length;
	cout <<"please enter the width :";
//	get input width
	cin >> width;
	
//	define loop 
	for (int i = 1; i <= width; i++)
	{
		cout<<endl;
		for (int j = 1; j <= length; j++)
		{
			cout<<'*'<<" ";
		}
	}
	return 0;
}