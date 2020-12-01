#include<iostream>
using namespace std;

void show(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
}
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

void countSort(int arr[], int n){
    int pass;

    int max = max_number(arr, n);
    int count[max + 1];

    int i, j;

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        pass++;
        count[arr[i]]++;
    }

    cout << endl;

    // cout<<"Count array "<<endl;
	// show(count,max + 1);

    show(arr, n);
    
    i = 0;
    j = 0;

    while (i <= max)
    {
        
        if(count[i] > 0){
            arr[j] = i;
            count[i]--;
            j++;
            pass++;
            cout << endl;

            cout<<"Count array "<<endl;
	        show(count,max + 1);
            
            cout << endl;

            cout << "Output array " << endl;
            show(arr, n);
        }

        else
        {
            i++;
        }   
    }
    cout << endl;
    cout << "Number of passes are: " << pass << endl;
}

int main(){

    int arr[100], n;

    cout << "Enter the number of elemens : " << endl;
    cin >> n;

    cout << "Enter the elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The array before sorting" << endl;
    show(arr, n);
    countSort(arr, n);
    cout << endl;

    cout << "The array after sorting " << endl;
    show(arr, n);

    return 0;
    
}