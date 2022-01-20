#include <iostream>
using namespace std;


int main() {
	cout << "This app about Recognize equality with its inversion" << endl;
//	define variable int type
	int inputuser;
	int reverseinputuser = 0;
// 	get input
	cout << "please enter the number :";
	cin >> inputuser;
	
	int usernumberinputcontainer = inputuser;
	int modinputuseraboveten;
//	define loop 
	while (inputuser > 0)
	{
		modinputuseraboveten = inputuser % 10;
		
		reverseinputuser = reverseinputuser * 10 + modinputuseraboveten;
		
		inputuser = inputuser / 10;
	}
	
	if (usernumberinputcontainer == reverseinputuser)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}