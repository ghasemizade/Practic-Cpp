#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int numberofinput;
	int num , count , input;
	int sum;
	
	cout << "please enter the number of input :";
	cin >> numberofinput;
	
	int inputuser[numberofinput];
	count = 0;
	
	for (int num = 0; num < numberofinput; num++)
	{
		count++;
		cin >> input;
		inputuser[num] = input;
		sum += input;
	}
	cout << "number of input user :"<< count << endl;
	
	int min = inputuser[1];
	int max = inputuser[1];
	
	for (int num = 0; num < numberofinput; num++)
	{
		if (inputuser[num] < min)
		{
			min = inputuser[num];
		}
		if (inputuser[num] > max)
		{
			max = inputuser[num];
		}
	}
//	print maximum number
	cout << "maximum number in this array :"<< max << endl;
//	print minimum number 
	cout << "minimum number in this array :"<< min << endl;
//	print sum of numbers
	cout << "sum of numbers :" << sum << endl;
	
	float avg;
	
	avg = sum / count;
	cout << "avrage of numbers :" << avg <<endl;
	
	int submission , power , division;
	int variance;
	
	for (int num = 0; num < numberofinput; num++)
	{
		submission = (inputuser[num] - avg);
		power = pow(submission,2);
		division = power / count;
		variance += division; 
	}
	cout << "Variance : "<< variance;
	
	
	return 0;
}