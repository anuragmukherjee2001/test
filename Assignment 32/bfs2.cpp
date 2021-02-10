#include <iostream>
using namespace std;

#define max 100

void bfs(int);

int q[max], front = -1, rear = -1;
int n, adj[100][100], state[100];

void insert_q(int v){
    if(rear == max -1){
        cout << "Overflow";
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear = rear + 1;
        q[rear] = v;
    }
}

int isEmpty(){
    if(front == -1 || front > rear){
        return 1;
    }
    else{
        return 0;
    }
}

int delete_q(){
    int delete_val;
    if(front == -1 || front > rear){
        cout << "Queue underflow";
        exit(1);
    }

    delete_val = q[front];
    front = front + 1;
    return delete_val;  
}

void create_G(){
    int count, max_edge, origin, dest;

    cout << "Enter the number of vertices";
    cin >> n;

    max_edge = n*(n-1);
    cout << "Enter the number of edges: " << endl;

    for(int i = 1; i < max_edge; i++){
        cout << "Enter the " << i << " " << "(-1 -1) to quit" << endl;
        cin >> origin >> dest;

        if(origin == -1 || dest == -1){
            break;
        }  

        else if(origin > n || dest > n || origin < 0 || dest < 0){
            cout << "Invalied" << endl;
            i--;
        }
        else{
            adj[origin][dest] == 1;
        }
    }
}


void bf_traverse(){
    int v;
    for(int v = 0; v < n; v++){
        state[v] = 1;
    }

    cout << "Enter the root vertex";
    cin >> v;
    bfs(v);
}

void bfs(int v){

    insert_q(v);
    state[v] = 2;

    while(!isEmpty()){
        v = delete_q();
        state[v] = 3;

        cout << v  << " ";

        for(int i = 0; i < n; i++){

            if(adj[v][i] == 1 && state[i] == 1){
                insert_q(i);
                state[i] = 2;
            }
        }
    }
}

int main(){
    create_G();
    bf_traverse();
    // bfs(origin);
    return 0;

}