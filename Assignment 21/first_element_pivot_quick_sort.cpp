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

int partition(int arr[], int low, int high){

    int pivot = arr[low];
    int left = low;
    int right = high;

    while (left < right)
    {
        do{
            left++;
        }while (arr[left] < pivot);
    
        do
        {
            right --;
        } while (arr[right] > pivot);

    if (left < right){

        swap(arr[left], arr[right]);
    }

    swap(arr[low], arr[right]);          
    return right;

    }
}

int QuickSort(int arr[], int low, int high){

    if (low < high)
    {
        int j = partition(arr, low, high);
        QuickSort(arr, low, j - 1);
        QuickSort(arr, j + 1, high);
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

    QuickSort(arr, 0, n);

    cout << "The elements of the array are " << endl;

    printArray(arr,n);

    return 0;
}