#include<iostream>
#include<stdlib.h>

using namespace std;


void print(char* str1,int n){
	for(int i=0;i<n;i++)
		cout<<str1[i];
	cout<<endl;	
}


char* concatenate(char* str1,int n,char* str2,int m){
	int i,j=0;
    char *str3;
	str3=(char *)malloc((n+m)*sizeof(char));
	for(i=0;i<n;i++){
		str3[j++]=str1[i];
	}
	for(i=0;i<m;i++){
		str3[j++]=str2[i];
	}
	return str3;
}

int main(void){
	int n,m;
    char *str1, *str2;


	cout<<"Enter length of first ";
	cin>>n;
	str1 = (char *)malloc(n*sizeof(char));
	cout<<"Enter first string ";
	cin>>str1;	

	cout<<"Enter length of second ";
	cin>>m;
	str2 = (char *)malloc(m*sizeof(char));
	cout<<"Enter second string ";
	cin>>str2;


	cout << "After concatination "<<endl;

	print(concatenate(str1, n, str2, m),(n+m));

	free(str1);
	free(str2);
}