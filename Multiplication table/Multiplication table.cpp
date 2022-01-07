#include <iostream>
using namespace std;

int main() {
	int row,colmn;
	
	
	for(int i = 1; i <= 10; i++)
	{
		row = i;
		for(int j = 1; j <= 10; j++)
		{
			colmn = j;
			cout<<"\t"<<row*colmn;
		}
			cout <<endl;
	}
	return 0;
}