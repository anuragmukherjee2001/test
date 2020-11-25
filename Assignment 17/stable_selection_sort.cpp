#include<iostream>

using namespace std;

void stableSelectionSort(int arr[], int n) 
{ 
    
    for (int i = 0; i <= n - 2; i++)  
    { 
  

        int min = i; 
        for (int j = i + 1; j < n; j++) 

            if (arr[min] > arr[j]) 

                min = j; 
 
        int key = arr[min]; 

        while (min > i)  
        { 
            arr[min] = arr[min - 1]; 
            min--; 
        } 

        arr[i] = key; 
    } 
} 

int main(){
    int arr[100], i, n;

    cout << "Enter the number of elements" << endl;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stableSelectionSort(arr, n);

    cout << "The sorted array is";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
    
    
}