#include<iostream>
using namespace std;
int comp=0;

struct array{
	int value;
	int indx;
};

void merge(struct array a[],int l,int mid,int r,int n){

	int i=l, j=mid+1, k=l, t=1;
	struct array z[r+1];

	while(++comp &&  i<=mid && j<=r)
	{
		if(a[i].value<=a[j].value)
		{
			z[k].value=a[i].value;
			z[k++].indx=a[i++].indx;
	
		}
			
		else
		{
			z[k].value=a[j].value;
			z[k++].indx=a[j++].indx;
			
		}		
	}
	
	while(++comp && i<=mid) 
	{
		z[k].value=a[i].value;
			z[k++].indx=a[i++].indx;
			
	}
	
	while(++comp && j<=r)
	{
		z[k].value=a[j].value;
		z[k++].indx=a[j++].indx;
			
	}
	
	cout <<"sub pass "<< t++ << endl;

	for(int i=0 ; i<n ; ++i)	
		cout<<a[i].indx<<" ";

	cout<<endl<<endl;

	for(int i=0 ; i<n ; ++i)
		cout<<a[i].value<<" ";

	cout<<endl;
	cout<<endl;

	for(int i=l ; i<=r ; ++i)
	{
		a[i].indx=z[i].indx;
		a[i].value=z[i].value;
	}
	
}

void merge_sort(struct array a[] , int l , int r , int n){

	int mid ;
	static int t=1;

	if(l<r)
	{
		mid=(l+r)/2;
		merge_sort(a , l , mid , n);
		merge_sort(a , mid+1 , r , n);
		merge(a , l , mid , r , n);
		cout<<"pass "<<t++<<endl;
		for(int i=0 ; i<n ; ++i)
			cout<<a[i].indx<<" ";

		cout<<endl<<endl;

		for(int i=0 ; i<n ; ++i)
			cout<<a[i].value<<" ";

	    cout<<endl;
		cout<<endl;
	}
	
}

int main()
{
	cout<<"Enter the limit of the array: ";
	int n;
	cin>>n;
	
	struct array a[n];
	cout<<"Enter the element of the array: "<<endl;

	for(int i=0 ; i<n ; ++i)
	{
		cin>>a[i].value;
		a[i].indx=i;
	}
		
	merge_sort(a , 0 , n-1 , n);
	cout<<"Total comparison: "<<comp<<endl;
	
	cout<<"The sorted array is"<<endl;

	for(int i=0 ; i<n ; ++i)
		cout<<a[i].indx<<" ";

	cout<<endl;

	for(int i=0 ; i<n ; ++i)
		cout<<a[i].value<<" ";

	cout<<endl;	
    return 0;
}