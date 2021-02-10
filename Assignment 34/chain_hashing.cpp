#include<iostream>
using namespace std;

#define size 7

struct node{
    int data;
    node *next;
};

node *table[10];

struct node *newNode(int key){
    node *ptr = new node();
    ptr -> data = key;
    ptr -> next = NULL;
    return ptr;
}

struct node *table[size] = {NULL};

int hash(int key){
    return (key % size);
}

void insert(int key){
    int index = hash(key);
    if(table[index] == NULL){
        table[index] = newNode(key);
        return;
    }

    struct node *temp = table[index];
    node *prev;
    while(temp != NULL){
        prev = temp;
        temp = temp -> next;
    }
    prev -> next = newNode(key);
    return;
}

struct node_search(int key){
    int index = hash(key);
    node *temp = table[index];

    while(temp != NULL){
        if(temp -> data == key){
            cout << "Data found" << endl;
            return temp;
        }
        temp = temp -> next;
    }
    cout << "Data is absent";
    return NULL;
}

void delete_node(int key){
    int index = hash(key);
    node *temp = table[index];
    node *prev;

    while(temp != NULL && temp -> data != key){
        prev = temp;
        temp = temp -> next;
    }
    if(temp == NULL){
        cout << "Data is not found";
        return;
    }
    if(temp == table[index]){
        table[index] = temp -> next;
        delete (temp);
    }
    prev -> next = temp-> next;
    return;
}

// void display(){

// }

int main(){
    a = 20;
    insert(22)
    return 0;
}