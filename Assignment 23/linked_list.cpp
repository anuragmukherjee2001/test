#include<iostream>
#include<stdlib.h>

using namespace std;

void swap(int *a,int *b){
	int temp=*b;
	*b=*a;
	*a=temp;
}
struct node{
	
	int data;
	node *next;
};

class linked_list
{
	public:
	node *head=NULL;

	void insert_at_end(){
		int n;
		cout<<"Enter the value: ";
		cin>>n;		

		if(head == NULL){
			head = new node();
			head -> data = n;
		}
			
		else{
			node *t,*o;
			t=new node();
			o=new node();
			o->data=n;
			o->next=NULL;
			t=head;
			
			while(t->next!=NULL ){
				t=t->next;				
			}			
			t->next=o;		
		}	
	}
	void show(){
		cout<<".................."<<endl<<endl;
		cout<<"THE LIST ..."<<endl<<endl;
		node *t;
		t=head;
		while(t!=NULL){
			cout<<t->data<<" -> ";
			t=t->next;
		}
		cout << "NULL";
		cout<<endl;	
		cout<<".................."<<endl<<endl;		
	}
	void insert_at_beg(){
		int n;
	
		if(head==NULL){
			insert_at_end();
		}
			
		else{
		cout<<"enter value-";
		cin>>n;				
			node *p;
			p=new node();
			p->data=n;
			p->next=head;
			head=p;
		}
	}
	void insert_at_pos(){
		int n,k;
		cout<<"enter value-";
		cin>>n;
		cout<<"enter position-";
		cin>>k;		
		int i=1;
		node *p,*t,*q;
		p= new node();
		q= new node();
		t=head;
		
		while(k>i){
			t=t->next;
			i++;
		}
			
		q=t->next;
		p->data=n;
		p->next=q;
		t->next=p;
	}
	void swap1st_nd_last(){
		node *t;
		t=head;
		while(t->next!=NULL)
			t=t->next;
		swap(head->data,t->data);
	}
	int countNode(){
		node *t;
		t=head;
		int i=0;
		while(t!=NULL){
				t=t->next;	
				i++;
		}
	return i;		
	}
	void showOdd(){
		cout<<".................."<<endl<<endl;
		cout<<"THE ODD NODES ..."<<endl<<endl;
		node *t;
		t=head;
		int i=0;
		while(t!=NULL){
			if(i%2!=0)
				cout<<t->data<<" ";
			t=t->next;	
			i++;
		}
		
	cout<<endl;
	cout<<".................."<<endl<<endl;		
	}
	void showEven(){
		cout<<".................."<<endl<<endl;
		cout<<"THE EVEN NODES ..."<<endl<<endl;
		node *t;
		t=head;
		int i=0;
		while(t!=NULL){
			if(i%2==0)
				cout<<t->data<<" ";
			t=t->next;	
			i++;
		}
		
	cout<<endl;	
	cout<<".................."<<endl<<endl;	
	}		
};

int main(void){
	linked_list a;
	int choice = 1;
	while(choice){

		cout << "1. Insert at End \t 2. Insert at beginning \t 3. Insert at a given Position \t 4. Display Whole\t 5. Display Odd \t 6. Display Even \t 7. Swap First and Last\t 8. Count\t 9. Exit" << endl;
		
		cout<<"Enter Your choice"<<endl;
		// cout<<"1 to insert at end"<<endl;
		// cout<<"2 to insert at begining"<<endl;
		// cout<<"3 to insert at given position"<<endl;
		// cout<<"4 to show the list"<<endl;
		// cout<<"5 to show odd positions"<<endl;
		// cout<<"6 to show enen positions"<<endl;
		// cout<<"7 to swap data of 1st and last node "<<endl;
		// cout<<"8 to count nodes "<<endl;
		// cout<<"0 to close the program "<<endl;
		cin >> choice;
		// system("CLS");
		switch(choice){
			case 1:
				a.insert_at_end();
				break;

			case 2:
				a.insert_at_beg();
				break;

			case 3:
				a.insert_at_pos();
				break;

			case 4:
				a.show();				
				break;

			case 5:
				a.showOdd();
				break;

			case 6:
				a.showEven();
				break;

			case 7:
				a.swap1st_nd_last();
				break;
	
			case 8:
				
				cout<<endl<<"The number of nodes are: "<<a.countNode()<<endl;
				cout<<".................."<<endl<<endl;
				break;

			case 9:
				exit(1);
				break;

			default:
				cout << "Enter a valied input";
				break;			
																																			
		}
		cout<<endl;
	}
}