#include<iostream>

using namespace std;

int search(int arr[], int l, int r, int x){
    if (l > r)
    {
        return -1;
    }
    if (arr[l] == x)
    {
        return l;
    }
    if (arr[r] == x)
    {
        return r;
    }

    else

    return search(arr, l + 1, r - 1, x);   
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

    result = search(arr, l, r, x);

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