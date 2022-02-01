#include <iostream>
using namespace std;


int main() 
{
	string code; //define input variable
	int nat_code;
	cout << "Enter the natinal code : "; //print for get input
	cin >> code; //get input
	nat_code = code[9];

	//define variable
	int firstnum , secondnum , thirdnum , fourthnum , fifthnum; 
	int sixthnum , seventhnum , eighthnum , ninethnum , tenthnum;
	firstnum = code[0] - 48;
	secondnum = code[1] - 48;
	thirdnum = code[2] - 48;
	fourthnum = code[3] - 48;
	fifthnum = code[4] - 48;
	sixthnum = code[5] - 48;
	seventhnum = code[6] - 48;
	eighthnum = code[7] - 48;
	ninethnum = code[8] - 48;
	tenthnum = code[9] - 48;
	
	int A;
	int B;
	int C;

//		define condition 
		A = tenthnum;
		B = (10 * firstnum)+(9 * secondnum)+(8 * thirdnum)+(7 * fourthnum)+(6 * fifthnum)+(5 * sixthnum)+(4 * seventhnum)+(3 * eighthnum)+(2 * ninethnum);
		C = B % 11;
		
		if (C == 0 && A == C && code != "1111111111" && code != "2222222222" && code != "3333333333" && code != "4444444444" && code != "5555555555" && code != "6666666666" && code != "7777777777" && code != "8888888888" && code != "9999999999")
		{
			cout << "\a this natinal code is true.\n";
		}
		else if (C == 1 && A == 1 && code != "1111111111" && code != "2222222222" && code != "3333333333" && code != "4444444444" && code != "5555555555" && code != "6666666666" && code != "7777777777" && code != "8888888888" && code != "9999999999")
		{
			cout << "\a this natinal code is true.\n";
		}
		else if (C > 1 && A == 11 - C && code != "1111111111" && code != "2222222222" && code != "3333333333" && code != "4444444444" && code != "5555555555" && code != "6666666666" && code != "7777777777" && code != "8888888888" && code != "9999999999")
		{
			cout << "\a this natinal code is true.\n";
		}
		else 
		{
			cout << "this natinal code incorrect...!";
		}

//		if (code == "1111111111" || code == "2222222222" || code == "3333333333" || code == "4444444444" || code == "5555555555" || code == "6666666666" || code == "7777777777" || code == "8888888888" || code == "9999999999")
//		{
//			cout << "";
//		}
	
	return 0;
}