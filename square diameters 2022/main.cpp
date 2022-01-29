#include <iostream>
using namespace std;
//define function
void square(int lenght) {
//	start loop for draw dimeters
	for (int loop = 1; loop <= lenght; loop++) 
	{
		for (int v = 1; v <= lenght; v++) {
			if (loop == v) {
				cout << "* ";
			}
			else if (v == (lenght + 1) - loop) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

}
//main funciton
int main() {
	int lenght;
	cout << "Please enter the Square Lenght: ";
//	get input
	cin >> lenght;
	square(lenght);

	return 0;
}