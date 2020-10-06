#include<iostream>
using namespace std;

void merge(int a1[], int a2[], int m, int n, int a3[]){

    int k = 0, j = 0, i = 0;

    

    while (i < m && j < n)
    {
        if(a1[i] < a2[j])
        {
            a3[k] = a1[i];
            k++;
            i++;
        }

        else if (a1[i] > a2[i])
        {
            a3[k] = a2[j];
            k++;
            j++;
        }

        else
        {
            a3[k] = a1[i];
            a3[++k] = a2[j];
            k++;
            i++;
            j++;
        }
                
    }

    while (i < m)
    {
        a3[k] = a1[i];
        k++;
        i++;
    }

    while (j < n)
    {
        a3[k] = a2[j];
        j++;
        k++;
    }
    
}

int main(){

    int n, m, a1[20], a2[20], a3[40];

    cout << "Enter the size of the firsty array" << endl;
    cin >> m;
    
    cout << "Enter the elements of the first array" << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }
    
    cout << "Enter the elements of the second array" << endl;
    cin >> n;

    cout << "Enter the elements of the second array" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }

    merge(a1, a2, m, n, a3);

    cout << "After merging" << endl;

    for (int i = 0; i < m + n; i++)
    {
        cout << a3[i] << " ";
    }

    return 0; 
}