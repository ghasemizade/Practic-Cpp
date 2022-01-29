#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	char sorting;

	cout << "Do you want Ascending sort press a|A or Desending sort press d|D :";
	//get input for sorting Ascending or Decending
	cin >> sorting;
	
	int number;
	
	cout << "please enter the number of numbers you want :";
	//get input for number of loop
	cin >> number;
	
    int arr[number];
    for (int i = 1; i <= number; i++)
    {
    	cin >> arr[i];
	}
    // this code for Acending sort
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, arr + n);
 
    cout << "\nArray after sorting using ";
    
    if(sorting == 'a' || sorting == 'A')
    {
    	for (int i = 0; i < n; ++i)
        	cout << arr[i] << " ";
	}

	// this code for Desending sort
	int x = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + x, greater<int>());

	cout << "Array after sorting : \n";
	if (sorting == 'd' || sorting == 'D')
	{
		for (int i = 0; i < x; ++i)
			cout << arr[i] << " ";
	}
	return 0;
}
