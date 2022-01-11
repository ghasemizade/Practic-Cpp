#include <iostream>
using namespace std;

int main()
{
//	define variable
    int mountstar;
    cout << "please enter the mountstar :";
//    Get input
    cin >> mountstar;
//	define first loop
    for(int star = 1; star <= mountstar; star++)
    {
//    	define second loop
    	for (int star1 = 1; star1 <= star; star1++)
    	{
    		cout<<star1;
    	}
        	cout<<endl;
    }


    return 0;
}
