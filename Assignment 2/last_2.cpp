#include<iostream>
using namespace std;

int gcd(int a, int b){

	if(b==0)
		return a;
	else
		return gcd(b,a%b);		
}

int content(int a[], int n){

	int g;

	g=a[0];

	for(int i=1; i<n; i++){
		g = gcd(g, a[i]);
	
	}
	
	return g;
}

void input(int a[],int n){

	for(int i=0; i<n; i++){
		cout<<"ENTER OF x^"<<i<<" ";
		cin>>a[i];
	}
		
}
int main(void){
	int a[5];
	int n;
	
	cin>>n;
	cout<<"enter the coefficients of the polynomial " << endl;
	input(a,n);
	
	cout<<"Content of the polynomial " << content(a,n);
}