#include<iostream>

using namespace std;
int c;

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
} 


void RecursivebubbleSort(int x[], int n) 
{ 
 
    if (n <= 1) 
        return; 
  
    
    for (int i = 0; i <= n-2; i++){
        
        c++;
        if (x[i] > x[i+1])
            swap(&x[i], &x[i+1]);
    }
    RecursivebubbleSort(x, n-1);
}
 

int main(){
    int x[100], i, n;
    cout << "Enter the number of elements " << endl;
    cin >> n;

    cout << "Enter the elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    RecursivebubbleSort(x, n);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;

    cout << "The number of steps are " << c << endl;

    return 0;
    
}