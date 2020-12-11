#include<iostream>
using namespace std;

int count = 0;

void swap(int *x,int *y){

    int temp = *y;
    *y = *x;
    *x = temp;
}

void printArray(int arr[], int n){
    int i = 0;
    for(i = 0; i < n; i++){

    cout<<arr[i]<<" ";
    }

    cout<<endl;

}

int partition(int arr[], int low,int high){
      
    cout<<endl;
    int pivot,i,j;
    i=low-1;
    pivot=arr[high-1];

    for(j=low; j < high - 1; j++){
        printArray(arr,high);

        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
            count++;
        }
    }
    swap(&arr[i+1],&arr[high-1]);
    
    // cout << endl;
    // cout << count;

    return (i+1);

    
}
void quickSort(int arr[],int low,int high)  
{  
    if (low < high)  
    {  
        int j = partition(arr, low, high);  
        quickSort(arr,low,j);  
        quickSort(arr, j+1, high);  
    }  
}  

int main(void){
    int n, arr[100];

    cout << "Enter the number of elements of the array " << endl;
    cin >> n;

    cout << "Enter the elements of the array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n);

    cout << "The elements of the array are " << endl;

    printArray(arr,n);

    return 0;
}