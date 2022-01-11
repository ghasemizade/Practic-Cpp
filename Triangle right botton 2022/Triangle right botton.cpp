#include <iostream>
using namespace std;


int main() {
//	define varivable
	int triangle;
	cout << "please enter triangle size :";
//	get input
	cin >> triangle;
//	define first loop
	for (int star = triangle; star >= 1; --star)
	{
//		define second loop
		for (int star1 = 1; star1 <= star; ++star1)
		{
			cout<<"*";
		}
		cout<<endl;   
	}
		  return 0;         
}
