#include<iostream>

using namespace std;

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
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

void print(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
}

void bubbleSort(int arr[], int n){

    int steps = 0;
    for(int i = 0; i < n - 1; i++){
        int flag = 0;
        int subPass =0;
        for(int j = 0; j<n-i-1; j++){
            cout << "pass " << i+1 <<" :" << endl;
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
            steps++;
            cout << "sub pass " << ++subPass <<" :";
            print(arr,n);
            cout << endl;
        }
        if(flag != 1)
            break;
    }
    cout << "Number of Passes :" << steps << endl;
    cout << "Sorted array :";
    print(arr,n);
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

    print(arr, n);
    
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
	        print(count,max + 1);
            
            cout << endl;

            cout << "Output array " << endl;
            print(arr, n);
        }

        else
        {
            i++;
        }   
    }
    cout << endl;
    cout << "Number of passes are: " << pass << endl;
}

void insertionSort(int array[], int size) {

   	int key, j,count=0;

   	for(int i = 1; i<size; i++) {
           
      	key = array[i];
      	cout<<"Pass : "<<i<<endl;
      	j = i;
      	while(j > 0 && (count++ && array[j-1]>key)) {

        	array[j] = array[j-1];
        	j--;
      	}

      	array[j] = key;

      	for(int k=0;k<size;k++)
		{
			cout<<array[k]<<" ";
		}

		cout<<endl;

   	}

   	cout<<"the number of Steps: "<<count<<endl;
}


int main(){
    int arr[100], n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i=0; i < n; i++)
        cin >> arr[i];

    cout << "Showing the bubble sort" << endl;

    bubbleSort(arr, n);

    cout << "Showing the counting sort" << endl;

    countSort(arr, n);

    cout << "Showing the insertion sort" << endl;

    insertionSort(arr, n);

    return 0;
}