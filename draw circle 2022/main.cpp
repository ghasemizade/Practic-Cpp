#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
//	define input
	float radius,k;
	cout << " Enter the Radius of the circle size : ";
	cin >> radius;//get input
	float temp_num = 2;
	// contoroler loop
	for (int count = - radius; count <= radius; count++)
	{
		for (int counter = - radius; counter <= radius; counter++)
		{
			k = ((count * temp_num)/ radius) * ((count * temp_num)/ radius) + (counter / radius) * (counter / radius);
			
			if (k > 0.95 && k < 1.08)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	
 return 0;

}