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

	void Insert_at_end(){
		int n;
		cout<<"Enter the value: ";
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
			Insert_at_end();
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
};

int main(void){

	linked_list lst;
	int choice = 1;

	while(choice){

		cout << "1. Insert at beginning \t 2. Insert at End \t 3. Insert at a given Position \t 4. Display Whole\t 5. Display Odd \t 6. Display Even \t 7. Swap First and Last\t 8. Count\t 9. Delete Last \t 10. Delete beginning \t 11. Delete item \t 12. Reverse \t 13. Exit" << endl;
		
		cout<<"Enter Your choice"<<endl;

		cin >> choice;

		switch(choice){
			case 1:
				lst.Insert_at_beginning();
				break;

			case 2:
				lst.Insert_at_end();
				break;

			case 3:
                int n, k;
                cout << "enter the value of the node: ";
                cin>>n;
                cout<<"enter the position: ";
                cin>>k;
				lst.insert_at_pos(n, k);
				break;

			case 4:
				lst.Display();				
				break;

			case 5:
				lst.Display_Odd();
				break;

			case 6:
				lst.Display_Even();
				break;

			case 7:
				lst.Swap_first_and_last();
				break;
	
			case 8:
				
				cout<<endl<<"The number of nodes are: "<<lst.Count_Node()<<endl;
				break;

            case 9:
                lst.Delete_last();
                cout << "The last element is deleted..." << endl;
                break;

            case 10:
                lst.Delete_beginning();
                cout << "The first element is deleted..." << endl;
                break;

            case 11:
                int item;
                cout << "Enter the item to be deleted: " << endl;
                cin >> item;
                lst.Delete_item(item);
                break;

            case 12:
                lst.reverse();
                cout << "The list is reversed";
                break;        

			case 13:
				exit(1);
				break;

			default:
				cout << "Enter a valied input";
				break;											
		}
		cout<<endl;
	}
    return 0;
}