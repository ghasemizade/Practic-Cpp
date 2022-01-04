#include <iostream>
using namespace std;

/*
In this program, the user enters the radius.
	then
Calculates enviroment, area and diameter.
*/

int main() {
	cout<<"In this program, the user enters the radiusthen Calculates enviroment, area and diameter.\n\n";
	float r,Enviroment,Area,Diameter;
	/*This part is defined as the fixed number Pi*/
	float Pi = 3.14;
	/*In this section, the user is told to enter the radius.*/
	cout<<"Please enter the radius :";
	/*Receives input here*/
	cin>>r;
	/*This section calculates the 'environment' and in the "Enviroment" variable pours*/
	Enviroment = 2*Pi*r;
	/*This section calculates the 'area' and in the "Area" variable pours*/
	Area = Pi*r*r;
	/*This section calculates the 'Diameter' and in the "Diameter" variable pours*/
	Diameter = 2*r;
						
	cout<<"Enviroment :"<<Enviroment<<"\n"<<"Area :"<<Area<<"\n"<<"Diameter :"<<Diameter;

	return 0;
}