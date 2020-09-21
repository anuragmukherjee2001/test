#include<iostream>

using namespace std;

int main(){

    int arr[50], n, i, j, del, c = 0;

    cout << "Enter the size of the array ";
    cin >> n;

    cout << "Enter the elements of the array ";
    
    for (i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    cout << "Enter element to be deleted ";
    cin >> del;

    for ( i = 0; i < n; i++)
    {
        if (arr[i] == del)
        {
            for ( j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            c++;
            break;
            
        }
        
    }
    
    if (c == 0)
    {
        cout << "Element not found";
    }
    
    else
    {
        cout << "The array is"<< endl;
        for (i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }
        
    }
    return 0;
}