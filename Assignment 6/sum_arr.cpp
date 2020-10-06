#include<iostream>
using namespace std;

int sum_of_numbers(int arr[], int n, int sum){

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
            
        }
        
    }
    

}

int main(){

    int n, arr[20], sum;

    cout << "Enter the size of the array";
    cin >> n;

    cout << "Enter the elements of the array";
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the sum" << endl;;
    cin >> sum;

    sum_of_numbers(arr, n, sum);

    return 0; 
}