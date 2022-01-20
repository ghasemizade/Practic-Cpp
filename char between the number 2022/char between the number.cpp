#include <iostream>
using namespace std;

int main()
{
	// define this program
	cout << "\t This project is char between the number."<<endl<<endl<<endl;
	// define variables
	int inputusernumber, modnum, reversinputusernumber=0;
	char charector;
	
	// geting input
	cout << "Please enter a number : ";
	cin >> inputusernumber;
	
	cout << "Enter a char for between numbers : ";
	cin >> charector;
	
	// define loop for operations	
	while (inputusernumber > 0)
	{
		modnum = inputusernumber % 10;
		inputusernumber = inputusernumber / 10;
		reversinputusernumber = reversinputusernumber * 10 + modnum;
	}

	
	while (reversinputusernumber > 0)
	{
		modnum = reversinputusernumber % 10;
		reversinputusernumber = reversinputusernumber / 10;
		
		cout << modnum << charector;
	}
	return 0;
}