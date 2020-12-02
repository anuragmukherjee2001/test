#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<< endl;
}
int binary_Search(int arr[],int low,int high,int x){
    if(high <= low){
        if(x > arr[low])
            return low + 1;
        else
            return low;
    }
    int mid = (high + low) / 2;
    if(x == arr[mid])
        return mid + 1;
    if(x > arr[mid])
        return binary_Search(arr, mid + 1, high, x);
    return binary_Search(arr, low, mid - 1, x);
}
void Insertion_Sort(int arr[], int n){

    int count = 0;

    for(int i = 1; i < n; i++){
        count++;
        int key = arr[i];
        int j = i - 1;
        int pos = binary_Search(arr, 0, j, key);
        while(j >= pos){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        
    }
    cout << "The number of comparisons " << count << endl;
}
int main(){
    
    int arr[100],n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i]; 
    Insertion_Sort(arr,n);
    cout<<"The sorted array : ";
    display(arr,n);
}