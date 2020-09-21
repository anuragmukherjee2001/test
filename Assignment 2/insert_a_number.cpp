#include<iostream>
using namespace std;

int insert(int n, int arr[], int x, int pos){

    int i;
    n++;

    for ( i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;
    return 0;
    
}

int main(){
    int arr[100];
    int i, x, pos, n, j;

    cout << "Enter the numbere of elements";
    cin >> n;

    for (i = 0; i < n; i++){
        arr[i] = arr[i+1];
    }

    for (j = 0; j < n; j++){
        cin >> arr[j];
    }

    cout << "Enter the position at which the element should be inserted";
    cin >> pos;

    cout << "Enter the element";
    cin >> x;

    insert(n, arr, x, pos);

    for (i = 0; i < n + 1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}