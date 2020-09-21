#include<iostream>

using namespace std;

int main(){

    int n, arr[50], l1, l2, i;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    if (arr[0] < arr[1])
    {
        l1 = arr[1];
        l2 = arr[0];
    }
    else
    {
        l1 = arr[0];
        l2 = arr[1];
    }

    for ( i = 2; i < n; i++)
    {
        if(arr[i] > l1){
            l2 = l1;
            l1 = arr[i];
        }
        else if (arr[i] > l2 && arr[i] != l1)
        {
            l2 = arr[i];
        }
        
    }

    cout << "Second largest number is "<< l2;
    return 0;
    
}