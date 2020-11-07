#include<iostream>

using namespace std;

int binSearch(int arr[], int l, int r, int x){

    if (l == r)
    {
        if (x == arr[l])
        {
            return l;
        }
        else
        {
            return -1;
        }
    }
    int mid = (l + r)/r;

    if (arr[mid] == x)
    {
        return mid;
    }
    
    if (x > arr[mid])
    {
        binSearch(arr, mid + 1, r, x);
    }
    
    if (x < arr[mid])
    {
        binSearch(arr, l, mid - 1, x);
    }
}

int main(){

    int arr[20], l, r, x, result;

    l = 0;

    cout << "Enter the number of elements in the array " << endl;
    
    cin >> r;

    cout << "Enter the elements of the array " << endl;

    for (int i = 0; i < r; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element which you want to find " << endl;
    cin >> x;

    result = binSearch(arr, l, r, x);

    if (result == -1)
    {
        cout << "The element is not found" << endl;
    }

    else
    {
        cout << "The element is found in position " << result + 1;
    }

    return 0;  
}