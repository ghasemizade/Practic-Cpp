#include <iostream>
using namespace std;

//Hosein Ghasemizade

int main() {
	
	float firstnumber, secondnumber;
	char oprator;
	
	
	while(true)
	{
	
	//	input first value
		cout<<"please enter the first number :";
		cin>>firstnumber;
	//	input oprator
		cout<<"choice the operator :";
		cin>>oprator;
	//	input second value
		cout<<"please enter the second number :";
		cin>>secondnumber;
		
		if (oprator == '+')
		{
			cout<<"Sum of numbers :"<<firstnumber + secondnumber<<"\a\n\n\n";
		}
		else if (oprator == '-')
		{
			cout<<"Negetive of numbers :"<<firstnumber - secondnumber<<"\a\n\n\n";
		}
		else if (oprator == '*')
		{
			cout<<"Product of numbers :"<<firstnumber * secondnumber<<"\a\n\n\n";
		}
		else if (oprator == '/')
		{
			if (secondnumber != 0)
			{
			cout<<"Division of numbers :"<<firstnumber / secondnumber<<"\a\n\n\n";
			}
			else
			{
				cout<<"'undifine!'"<<"\a\n\n\n";
			}
			
		}
		else 
		{
			cout<<"Error!\a\a\n\n\n";break;
		}
	}

	
	
	return 0;
}