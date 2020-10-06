#include<iostream>
using namespace std;

int volume(int a){
    return a * a * a;
}

int volume(int a, int b){
    return 2 * (a * b);
}

int volume(int a, int b, int c){
    return a * b * c;
}

int main(){
    // cout << "Hello world" << endl;
    int a, b, c, d, e, f;
    cout << "Enter the length, breadth and height of the cuboid" << endl;
    cin >> a >> b >> c;
    cout << "Enter the length of the side of the cube" << endl;
    cin >> d;
    cout << "Enter the length and breadth of the sides of the rectangle" << endl;
    cin >> e >> f;
    cout << "The volume of the cuboid is " << volume(a, b, c) << endl;
    cout << "The volume of the cube is " << volume(d) << endl;
    cout << "The volume of the rectangle is " << volume(e, f) << endl;
    return 0;
}