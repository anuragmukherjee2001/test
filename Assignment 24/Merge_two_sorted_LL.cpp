#include<iostream>
#include<stdlib.h>

using namespace std;

void swap(int *x, int *y){
	int temp=*y;
	*y=*x;
	*x=temp;
}
struct node{
	
	int data;
	node *next;
};

class linked_list
{
	
	node *head = NULL;

    public:

	void Insert_at_end(int n){
		
		cin>>n;		

		if(head == NULL){
			head = new node();
			head -> data = n;
		}
			
		else{
			node *temp,*curr;
			temp = new node();
			curr = new node();
			curr->data=n;
			curr->next=NULL;
			temp=head;
			
			while(temp->next!=NULL ){
				temp=temp->next;				
			}			
			temp->next = curr;		
		}	
	}
	void Display(){
		
		cout<<"The whole list is..."<<endl<<endl;
		node *temp;
		temp = head;
		while(temp != NULL){
			cout << temp -> data<<" -> ";
			temp = temp -> next;
		}
		cout << "NULL";
		cout << endl;	
		cout<<".................."<<endl<<endl;		
	}
	void Insert_at_beginning(){
		int n;
	
		if(head == NULL){
			Insert_at_end(n);
		}
			
		else{
		cout << "enter value-";
		cin >> n;				
			node *curr;
			curr=new node();
			curr->data=n;
			curr->next=head;
			head=curr;
		}
	}
	void insert_at_pos(int n, int k){
		
				
		int i = 1;
		node *prev,*temp,*curr;
		prev = new node();
		curr = new node();
		temp = head;
		
		while(k>i){
			temp = temp -> next;
			i++;
		}
			
		curr = temp -> next;
		prev -> data = n;
		prev -> next = curr;
		temp -> next = prev;
	}
	void Swap_first_and_last(){
		node *temp;
		temp = head;
		while(temp->next!=NULL)
			temp=temp->next;
		swap(head->data,temp->data);
	}

	int Count_Node(){
		node *temp;
		temp=head;
		int i=0;
		while(temp!=NULL){
			temp=temp->next;	
			i++;
		}
	return i;		
	}

	void Display_Odd(){

		cout<<"The odd nodes are ..."<<endl<<endl;
		node *temp;
		temp = head;
		int i=0;
		while(temp!=NULL){
			if(i%2!=0){
				cout<<temp->data<<" ";
			}	
			temp = temp->next;	
			i++;
		}
		
	cout<<endl;
		
	}
	void Display_Even(){
		
		cout<<"The even nodes are ..."<<endl;
		node *temp;
		temp = head;
		int i = 0;
		while(temp != NULL){
			if(i % 2 == 0){
				cout<<temp->data<<" ";
			}
			temp = temp->next;	
			i++;
		}
		
	cout<<endl;	
		
	}

    void Delete_last(){
        node* temp = head, *prev;
        if(head == NULL){
            cout << "Underflow"<<endl;
            return;
        }
        if(head -> next==NULL){
            head==NULL;
        }
        
        while(temp -> next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        prev -> next=NULL;	
        free(temp);
    }

    void Delete_beginning(){
        if (head == NULL)
        {
            cout << "The list is empty";
        }
        node *temp = head;
        head = head -> next;
        free(temp);
        
    }

    void Delete_item(int item){
        if(head==NULL){
		    cout<<"Underflow...."<<endl;
	    }

        else{
            node *temp = head -> next, *prev = head,*q;
            if(head->data == item)
			Delete_beginning();
		else{
			while(temp -> data!=item && temp->next!=NULL){
				prev = temp;
				temp = temp -> next;
			}
			if(temp->next==NULL){
				Delete_last();
				return;
			}
			q=temp->next;
			prev->next=q;
			free(temp);
		}
    }
    }

    void reverse(){

        node *curr = head;
        node *prev = NULL, *next = NULL;
 
        while (curr != NULL) {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

	linked_list merge_sorted(linked_list, linked_list);
};

linked_list linked_list :: merge_sorted(linked_list lst1, linked_list lst2){
	linked_list o;
	node *temp1 = lst1.head, *temp2 = lst2.head;
	while(temp1!=NULL && temp2!=NULL){
		if(temp1->data == temp2->data){
			o.Insert_at_end(temp1->data);

			o.Insert_at_end(temp2->data);

			temp1=temp1->next;

			temp2=temp2->next;		
					}
		else if(temp1->data<temp2->data){
			o.Insert_at_end(temp1->data);
			temp1=temp1->next;
		}
		else{
			o.Insert_at_end(temp2->data);
			temp2=temp2->next;			
		}
	}
	while(temp1!=NULL){
			o.Insert_at_end(temp1->data);
			temp1=temp1->next;		
	}
	while(temp2!=NULL){
			o.Insert_at_end(temp2->data);
			temp2=temp2->next;		
	}
	return o;
	}

	

int main(void){
	linked_list a,b;
	int n1,n2,item;
	cout << "Enter the number of items";
	cin >> n1;

	for(int i = 0; i < n1; i++){
		cout << "Enter the item";
		cin >> item;
		a.Insert_at_end(item);
	}
	

	a.Display();

	cout << "Enter the number of items";
	cin >> n2;

	for(int i = 0; i < n2; i++){
		cout << "Enter the item";
		cin >> item;
		b.Insert_at_end(item);
	}
	// b.Insert_at_end();
	b.Display();
	linked_list o = linked_list.merge_sorted(a,b);
	cout<<"AFTER MERGING......."<<endl;
	o.Display();
}

// int main(void){

// 	linked_list lst1, lst2;
	
//     return 0;
// }

// This code is not completed