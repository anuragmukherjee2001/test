#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[60];
    int n;
    cout << "Enter the elements in the array";
    cin >> n;
    int i,oddSum=0,evenSum=0;
    for(i = 0; i < n; i++){
        cout << "Enter the element";
        cin >> arr[i];
    }
    for(i=0; i < n; i++){
        if(arr[i] % 2 == 0){

        evenSum=evenSum+arr[i];
        }
    else{
             oddSum=oddSum+arr[i];
        }
    }
    cout << "The sum of odd numbers are:" << oddSum << endl;
    cout << "\nThe sum of even numbers are:"<<evenSum;
    return 0;
}