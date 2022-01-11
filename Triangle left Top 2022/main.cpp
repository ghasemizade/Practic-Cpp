#include <iostream>
using namespace std;

int main() 
{
	int num;
	int star;
	cout << "please enter the number star :";
	cin >> num;
	
	for (int star = 0; star <= num; star++)
	{
		for (int star1 = 0; star1 < star; star1++)
		{
			cout<<"* ";
		}
		cout<<endl;
	
		for (int space = star; space <= num; space++)
		{
			cout<<"  ";
		}
	}
	cout<<"\n";
	return 0;
	
}