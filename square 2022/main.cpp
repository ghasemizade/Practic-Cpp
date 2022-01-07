#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"please enter the size :";
	cin>>num;
	
	for (int x = 1; x <= num; x++)
	{
		for (int y = 1; y <= num; y++)
		{
			cout<<" "<<'*';
		}
		cout<<endl;
	}
	return 0;
}



