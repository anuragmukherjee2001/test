#include<iostream>

using namespace std;

class Complex{

    int real, img;

    public:
        Complex(){
            real = 0;
            img = 0;
        }

        Complex(int r, int i){
            real = r;
            img = i;
        }

        Complex operator= (Complex c){
            Complex temp;
            temp.real = real;
            temp.img = img;
            return temp;
        }

        void display(){
            cout << real << " + " << img << "i" << endl;
        }
};

int main(){

    Complex c1(10,15);
    Complex c2(15,20);
    
    Complex c3 = c2;

    c3.display();

    return 0;
}