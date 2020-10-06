#include<iostream>

using namespace std;

class Complex{

    public:
    
    int real, img;

    Complex(){
        real = 0;
        img = 0;
    } 

    Complex(int r, int i){
        real = r;
        img = i;
    }

    Complex(const Complex &c){
        real = c.real;
        img = c.img;
    }

    void display(){
        cout << "The Complex Number is" << endl;
        cout << real << "   +   " << img << "i" << endl;
    }

    void set(int sr, int simg){
        real = sr;
        img = simg;  
    }
};

Complex sum(Complex C1, Complex C2){

    Complex C3;

    C3.real = C1.real + C2.real;
    C3.img = C1.img + C2.img;
    
    return C3;
}



int main(){

    int x1,y1;

    Complex Cm2, Cm3;

    cout << "Enter the real value" << endl;
    cin >> x1;

    cout << "Enter the imaginary value" << endl;
    cin >> y1;

    Complex Cm1(x1, y1);

    Cm1.display();

    Cm2.set(15, -26);

    Cm2.display();

    
    Cm3 = sum(Cm1, Cm2);
    
    
    Cm3.display();

    // cout << "The sum is" << endl;
    // cout << cm3.real << "   +   " << cm3.img << "i";

    return 0;
}


// Question 2