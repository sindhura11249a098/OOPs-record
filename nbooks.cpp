#include<iostream>
using namespace std;
class book {
    private:
    int accno,pages;
    char bookname[50],author[50],isbno[50];
    float price;
    public:
    void getdetails() {
        cout<<"\nenter bookname:";
        cin>> bookname;
        cout<<"\nenter author:";
        cin>> author;
        cout<<"\nenter isbno:";
        cin>> isbno;
        cout<<"\nenter pages:";
        cin>> pages;
        cout<<"\naccno:";
        cin>> accno;
        cout<<"\nenter price:";
        cin>> price;
    }
    void display() {
        cout<<"\nbook details\n";
        cout<<"bookname"<<bookname;
        cout<<"author"<<author;
        cout<<"isbno"<<isbno;
        cout<<"pages"<<pages;
        cout<<"accno"<<accno;
        cout<<"price"<<price;
    }
};
int main() {
    book s;
    s.getdetails();
    s.display();
    return 0;
}
