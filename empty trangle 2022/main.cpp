
#include <iostream>
using namespace std;

int main()
{
	cout << "this program can be draw empty triganle" << endl;
	
    int inputside;
    cout << "Enter the side triangle : "; 
	cin >> inputside;

    for (int i = 1; i <= inputside; i++)
    {
        
        for (int j = 1; j <= (inputside - i); j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i * 2 - 1; k++)
        {
//            define condition
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == inputside)
            {
//                print start
                cout << "*";
            }
            else
            {
//                print space
                cout << " ";
        	}
        }
        cout << endl;
    }
    return 0;
}