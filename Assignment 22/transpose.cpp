#include<iostream>
#include<stdlib.h>
using namespace std;


void input(int *arr,int row,int column){
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++)
			cin>>*(arr+i*column+j);
	}
}
int* transpose(int *arr,int row,int column){
    int *arr1;
	arr1 = (int *)malloc(row*column*sizeof(int));
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++)
			*(arr1+j*column+i)=*(arr+i*column+j);
	}
	return arr1;	
}
void print_matrix(int *arr,int row,int column){
	for(int i = 0; i < row; i++){
		cout<<"     ";
		for(int j=0;j<column;j++)
			cout<<*(arr+i*column+j)<<" ";
		cout<<endl;
	}	
}
int main(void){
	int row, column;
    int *arr1; 
	cout<<"Enter the row ";
	cin>>row;

    cout << "Enter the column ";
    cin >> column;

	arr1=(int *)malloc(row * column * sizeof(int));
	input(arr1,row,column);

    cout << "The original matrix is" << endl;

    print_matrix(arr1, column, row);

	arr1 = transpose(arr1, row, column);
	cout<<"The transpose matrix is "<<endl;

	print_matrix(arr1,column,row);
    
    free(arr1);
    

}