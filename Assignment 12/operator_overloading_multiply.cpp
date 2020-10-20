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

        Complex operator* (Complex c){
            Complex temp;
            temp.real = real*c.real - real * c.img;
            temp.img = img * c.real - c.img * img;
            return temp;
        }

        void display(){
            cout << real << " + " << img << "i" << endl;
        }
};

int main(){

    Complex c1(1,1);
    Complex c2(5,2);
    Complex c4(3,2);
    Complex c3 = c2 * c1;

    c3.display();

    return 0;
}