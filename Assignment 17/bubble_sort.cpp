#include<iostream>

using namespace std;

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
}
void bubbleSort(int arr[], int n){

    int steps = 0;
    for(int i = 0; i < n - 1; i++){
        int flag = 0;
        int subPass =0;
        for(int j = 0; j<n-i-1; j++){
            cout << "pass " << i+1 <<" :" << endl;
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
            steps++;
            cout << "sub pass " << ++subPass <<" :";
            print(arr,n);
            cout << endl;
        }
        if(flag != 1)
            break;
    }
    cout << "Number of Passes :" << steps << endl;
    cout << "Sorted array :";
    print(arr,n);
}

int main(){
    int arr[100],n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i=0; i < n; i++)
        cin >> arr[i];
    bubbleSort(arr, n);
    return 0;
}