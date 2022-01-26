#include <iostream>
using namespace std;

// define find three largest number function
void three_largest(int arr[], int arr_size)
  {
   int i, first, second, third;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }
  
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
  
      cout << endl << "Three largest elements are: " <<first <<", "<< second <<", "<< third;
}
// define find three smallest number function
void three_smallest(int arr[], int arr_size)
  {
   int i, first1, second1, third1;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }

    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] < first1)
        {
            third1 = second1;
            second1 = first1;
            first1 = arr[i];
        }
         else if (arr[i] < second1)
        {
            third1 = second1;
            second1 = arr[i];
        }
  
        else if (arr[i] < third1)
            third1 = arr[i];
    }
  
      cout << endl << "Three smallest elements are: " 
	  << first1 <<", "
	  << second1 <<", "
	  << third1;
}
// define main function
int main()
{
	int inputnum;
	cout << "please enter number of input number :";
	cin >> inputnum;
    int nums[inputnum];
    
    for (int i = 0; i < inputnum; i++)
    {
    	cin >> nums[i];
	}
	
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    
    for (int i=0; i < n; i++)
	{ 
    	cout << nums[i] <<" ";
    }
    
    three_largest(nums, n);
    three_smallest(nums, n);
    return 0;
}
