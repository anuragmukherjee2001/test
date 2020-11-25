#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min;  

    for (i = 0; i < n-1; i++)  
    {  

        min = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;  

        swap(&arr[min], &arr[i]);  
    } 
    for(j = 0; j < n; j++){
        cout << arr[i];
    } 
    cout << endl;
}  

void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
 
int main()  
{  
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}


