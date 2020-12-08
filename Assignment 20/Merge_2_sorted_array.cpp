#include<iostream> 
using namespace std; 
  

void merge(int arr1[], int arr2[], int n1, int n2, int arr3[])
                              
{ 
    int i = 0, j = 0, k = 0, count = 0; 

    while (i < n1 && j < n2 && ++count) 
    { 
        
        if (arr1[i] < arr2[j]){

            arr3[k++] = arr1[i++];
        } 
             
        else{

            arr3[k++] = arr2[j++];
        }
             
    } 

    while (i < n1 && ++count) 
        arr3[k++] = arr1[i++]; 

    while (j < n2 && ++count) 
        arr3[k++] = arr2[j++];

    cout << "The number of comparisons are " << count; 

}            

int main(){

    int arr1[100], arr2[100], arr3[200];
    int n1, n2;

    cout << "Enter the number of elements in the first array " << endl;
    cin >> n1;

    cout << "Enter the elements of the array " << endl;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array " << endl;
    cin >> n2;

    cout << "Enter the elements of the array " << endl;

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    
    merge(arr1, arr2, n1, n2, arr3);

    cout << endl;

    cout << "Elements of the merged array " << endl;

    for (int i = 0; i < n1 + n2; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}