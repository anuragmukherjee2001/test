#include<iostream>

using namespace std;

int max(int m, int n){
    return (m < n) ? n : m;
}

int *add(int arr1[], int arr2[], int m, int n){

    int size = max(m, n);
    int sum[30];

    for(int i = 0; i < m; i++){
        sum[i] = arr1[i];
    }

    for(int i = 0; i < m; i++){
        sum[i] += arr2[i];
    }
    return sum;
}

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
        int arr1[20], m , n, arr2[30];

        cout << "Enter the size of polynomial 1 ";
        cin >> m;

        cout << "Enter the coeff of polynomial 1 ";

        for (int i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }
        print(arr1, m);
        cout << endl;
        
        cout << "Enter the size of polynomial 2 ";
        cin >> n;

        cout << "Enter the coeff of polynomial 2 ";

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        print(arr2, n);
        cout << endl;

        int *sum = add(arr1, arr2, m, n);
        int size = max(m, n);

        cout << "The result is ";
        print(sum, size);

        return 0;
    }