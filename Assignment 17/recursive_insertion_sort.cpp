#include<iostream>

using namespace std;

void RecursiveinsertionSort(int x[], int n, int count) 
{ 
 
    if (n <= 1) 
        return; 
  
    
    RecursiveinsertionSort( x, n-1, count++); 

    int key = x[n-1]; 
    int j = n-2; 
  
    while (j >= 0 && x[j] > key) 
    { 
        x[j+1] = x[j]; 
        j--; 
    } 
    x[j+1] = key; 
} 

int main(){
    int x[100], i, n, count = 0;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    RecursiveinsertionSort(x, n, count);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << count << endl;
    return 0;
    
}