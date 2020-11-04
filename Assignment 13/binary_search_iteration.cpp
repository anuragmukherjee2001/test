#include<iostream>

using namespace std;

int binSearch(int arr[], int l, int r, int x){

    while (l <= r)      
    {
        int mid;
        mid = (l+r)/2;

        if (x == arr[mid])
        {
            return mid;
        }
        else if(x > arr[mid])
        {
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }
    return -1;
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