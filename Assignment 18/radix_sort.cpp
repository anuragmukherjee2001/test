#include<iostream>
using namespace std;

int max_number(int arr[], int n){
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void show(int a[],int n){

	for(int i=0;i<n;i++)
	
		cout<<a[i]<<" ";
	
	cout<<endl;
}
void countsort(int arr[],int n,int exp){
    
	int max,j,i;
	
	max = max_number(arr,n);
	
	int count[max + 1];
	
	int output[n];
	
	for(int i = 0; i <= max; i++){

		count[i] = 0;
	}
	
	for(i = 0; i < n ; i++){

		count[(arr[i] / exp) %10]++;
	}
	
	for(i=1;i<=max;i++){
		count[i] += count[i-1];
	}
	
	for(i=n-1;i>=0;i--){
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}	
	for(i=0;i<n;i++)

		arr[i] = output[i];
}
void radix(int arr[],int n){
	int m;
	// int exp=1;
	m = max_number(arr,n);

	for (int exp = 1; m / exp > 0; exp *= 10) 
        countsort(arr, n, exp); 
	}

int main(void){
	int arr[100], n;

    cout << "Enter the number of elemens : " << endl;
    cin >> n;

    cout << "Enter the elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

	radix(arr,7);
	show(arr,7);
	return 0;
}