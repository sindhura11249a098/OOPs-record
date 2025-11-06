#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    
    Complex() {
        real = 0;
        imag = 0;
    }

    
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2; 

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "\nSum of Complex Numbers: ";
    c3.display();

    return 0;
}
