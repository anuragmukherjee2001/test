#include<iostream>
using namespace std;

int main()
{
	
	int arr[50], size, i, x, count=0;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements of the array: ";

	for(i=0; i < size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be deleted : ";
	cin>>x;
	for(i=0; i<size; i++)
	{
		if(arr[i]==x)
		{
			for(int j=i; j<(size-1); j++)
			{
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found..!!";
	}
	else
	{
		cout<<"array is :" << endl;

		for(i=0; i<(size-1); i++)
		{
			cout<<arr[i]<<" ";
		}
	}

    return 0;
	
}