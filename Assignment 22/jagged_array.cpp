#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int row;
    int column[100];
    cout << "Enter the no. of sub arrays" << endl;
    cin >> row;

    for(int i=0;i<row;i++){
        cout<<"Enter the size of "<<" row:" << i<< endl;
        cin>>column[i];
    }
    int **ptr;

    ptr = (int **)malloc(row * sizeof(int *));
    
    for(int i = 0; i < row; i++){

        ptr[i]=(int *)malloc(column[i]*sizeof(int));
    }
        
    cout<<"Enter the elements "<< endl;
    int x;

    for(int i = 0; i < row; i++){
        for(int j=0;j<column[i];j++){
            cin>>x;
            *(ptr[i]+j) = x;
        }
    }
    cout<<"The jagged array is: " << endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column[i]; j++){
            cout << *(ptr[i]+j) << " ";
        }
        cout<<endl;
    }

    free(ptr);
}


