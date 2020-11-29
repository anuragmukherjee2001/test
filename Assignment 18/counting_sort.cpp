#include<iostream>
using namespace std;

int countSort(int arr[], int n, int o){

    int i, j, k, pass;
    int c[0 + 1];


    for(int i = 0; i < o+1; i++)
    {
        c[i] = 0;
    }

    for(int i = 0; i < n; i++){
        pass++;
        c[arr[i]] += 1;
    }

    for (int i = 1; i < o+1; i++)
    {
        c[i] += c[i - 1];
    }

    for (int j = 0; j < c[0]; j++)
    {
        arr[j] = 0;
    }
    
    for (int i = 0; i < o + 1; i++)
    {
        for (int j = c[i - 1]; j < c[i]; j++)
        {
            arr[j] = i;
            pass++;
        }
    }
    return pass;



}
int main(){
    int arr[100];
    int n;

    cout << "Enter the number of elements " << endl;
    cin >> n;

    cout << "Enter the elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countSort(arr, n, 10);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}