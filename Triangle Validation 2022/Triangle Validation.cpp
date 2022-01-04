#include <iostream>
using namespace std;
/* 
This program takes three numbers from the user and tells the user
That these three numbers can be triangles
Or not.
 */

int main() {
	/*Here we define the variable*/
	int firstside, secondside, thirdside;
	cout<<"please enter the firstside :";
	cin>>firstside;
	cout<<"please enter the secondside :";
	cin>>secondside;
	cout<<"please enter the thirdside :";
	cin>>thirdside;
	/*Here the triangle validation conditions are defined with if*/
	if (firstside < secondside + thirdside){
		cout <<"\n 		This is a Triangle \a";
	}
	else if (secondside < firstside + thirdside){
		cout <<"\n 		This is a Triangle \a";
	}
	else if (thirdside <firstside + secondside){
		cout <<"\n 		This is a Triangle \a";
	}
	else {
		cout<<"Error";
	}
	
	return 0;
}