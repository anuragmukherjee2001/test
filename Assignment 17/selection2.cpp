#include<iostream>

using namespace std;

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
} 

int main(void){
    int n, i, j, min;
    int step = 0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        min = i;
        
        for(j=i+1;j<n;j++){
            
            if(arr[j]<arr[i]){
                min = j;
                
                swap(&arr[min], &arr[i]);
            }
        }
    
    step++;
    cout << "Step " << i+1 << "    ";
        for(j=0; j<n; j++)
            cout << arr[j]<<" ";
        
        cout << endl;
    }
    
    
    cout<<"the sorted array will be "<<endl;
    
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    
    cout<<"the no of passes are "<<step<<" "<<endl;
    return 0;
}