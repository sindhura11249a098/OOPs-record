#include<iostream>
using namespace std;
class Complex
{
    private:
    double real;
    double img;
    public:
    Complex(double r=0.0,double i=0.0);
    Complex addComplex(Complex c2);
    void display();
};
Complex::Complex(double r,double i)
{
    real=r;
    img=i;
}
Complex Complex::addComplex(Complex c2)
{
    Complex sum;
    sum.real = real + c2.real;
    sum.img = img + c2.img;
    return sum;
}
void Complex::display()
{
    std::cout<<real<<"+i"<<img<<std::endl;
}
int main()
{
    Complex c1(9.86, 5.78);
    Complex c2(12.1,337.2);
    Complex result;
    std::cout<<"Complex number 1:";
    c1.display();
    std::cout<<"Complex number 2:";
    c2.display();
    result = c1.addComplex(c2);
    std::cout<<"sum:";
    result.display();
    return 0;
}
    
