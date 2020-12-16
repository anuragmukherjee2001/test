#include<iostream>
using namespace std;

int count = 0;
int swaps = 0;

void swap(int *x,int *y){

    int temp = *y;
    *y = *x;
    *x = temp;
}

void printArray(int arr[], int low, int high){
    int i = 0;
    for(i = low; i < high; i++){

    cout<<arr[i]<<" ";
    }

    cout<<endl;

}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
 
    while (left < right) {

        do {
            i++;
        } while (arr[i] < pivot && ++count);

        do {
            j--;
        } while (arr[j] > pivot && ++count);

        if (i >= j)
            return j;
 
        swap(arr[i], arr[j]);
        swaps++;

        // cout << "Swapping:" << endl;
        // printArray(arr, low, high);
        cout<<"Pivot ="<<pivot<<endl;
    printArray(arr,low,high+1);
    }
    // cout << endl;
    // cout << "The number of comparisons are: " << count; 
}

int QuickSort(int arr[], int low, int high){

    if (low < high)
    {
        int j = partition(arr, low, high);
        printArray(arr,low,j);
            // printArray(arr,j+1,high+1);
        QuickSort(arr, low, j);
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

    QuickSort(arr, 0, n - 1);

    cout << "The elements of the array are " << endl;

    printArray(arr, 0, n);

    cout << endl;
    cout << "The number of comparisons are: " << count << endl;
    cout << "The number of swaps are: " << swaps;

    return 0;
}