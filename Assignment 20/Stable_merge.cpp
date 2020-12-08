int merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    int Z[100];

    int count = 0;
 
    while (i <= mid && j <= right && ++count) {
        if (arr[i] <= arr[j]) {
            Z[k++] = arr[i++];
            
        }
        else {
            Z[k++] = arr[j++];
        }
    }

    while (i <= mid && ++count) {
        Z[k++] = arr[i++];
    }

    while (j <= right && ++count) {
        Z[k++] = arr[j++];
    }

    for (int i = left; i <= right; i++)
    {
        arr[i] = Z[i];
    }

    return count;
    
}

void mergeSort(int arr[],int left,int right){

    if(left < right){

        int mid = (left + right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
        // printArray(arr, left + right);
    }
}



int main(){

    int n, arr[100];

    cout << "Enter the number of elements of the array " << endl;
    cin >> n;

    cout << "Enter the elements of the array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "The elements of the array are " << endl;

    printArray(arr, n);

    cout << endl;

    cout << "The number of comparisons are " << merge(arr, 0, (n - 1)/2, n - 1);

    return 0;
}