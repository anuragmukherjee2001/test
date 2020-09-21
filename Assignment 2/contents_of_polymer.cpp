#include<iostream>

using namespace std;

int print(int poly[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << poly[i];
        if (i != 0){
            cout << "x^" << i;
        }
        if (i != n-1)
        {
            cout << " + "; 
        }
        
    }

    return 0;   
}

int main()
    {
        int arr[20], m;

        cout << "Enter the size of the array ";
        cin >> m;

        cout << "Enter the elements ";

        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }

        cout << "The contents of the polynomial are" << endl;
        print(arr, m);

        cout << endl;
        
        
        return 0;
    }