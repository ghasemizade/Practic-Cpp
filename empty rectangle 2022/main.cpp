#include<iostream>
using namespace std;
int main()
{
	int rows , columns;
	
	cout << "please enter the row :";
//	get input columns
	cin >> rows;
	cout << "please enter the columns :";
//	get input columns 
	cin >> columns;
//	define loops by for
    for(int i = 0; i < rows; i++)
    {
    	for(int j = 0; j < columns; j++)
		{
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) 
            {
                cout << "*";
            }
           	else 
            {
                cout << " ";
            } 
        }
        cout << "\n";
    }		
 	return 0;
}
