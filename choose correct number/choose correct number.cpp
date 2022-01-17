#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main() 
{
//	explain about this game 
	cout << "\t this game about guess number between zero to hundred then so you should choose correct number \n\n\n\n";
	cout << "please enter the number : ";
//	choose random number
	srand ( time ( 0 ) );
//	define varible
	const int round = 5;
	int num = 1;
	int randnumber = rand () % 100 + 1;
	int userguess;
	cin >> userguess;
//	define loop 
	while (randnumber <= round)
	{
		cout << endl << "So... What's your Guess ?";
		cin >> userguess;
//		define condition this game
		if (userguess == randnumber)
		{
			cout << "Hooray ! You Found it !";
			break;
		}
		else if ( userguess > randnumber )
		{
			cout << "Your Number is bigger than randnumber ! :( "<< endl;
		}
		else 
		{
			cout << "Your Number is smaller than randnumber ! :( " << endl;
		}
		randnumber++;
	}
		cout<< endl << "rand number was : " << randnumber << endl;
		
	
	return 0;
}