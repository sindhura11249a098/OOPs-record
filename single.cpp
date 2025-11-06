#include <iostream>
#include <conio.h>
using namespace std;

class student
{
private:
    char name[20];
    int rno;

public:
    void getstudent()
    {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent()
    {
        cout << "Name of the student = " << name;
        cout << "\nRoll number of the student = " << rno;
    }
}; 

class address : public student
{
private:
    char city[20];

public:
    void getaddress()
    {
        getstudent();
        cout << "\nEnter city: ";
        cin >> city;
    }

    void displayaddress()
    {
        displaystudent();
        cout << "\nCity = " << city;
    }
};

int main() 
{
    address a1; 
    a1.getaddress();
    a1.displayaddress();
    getch();  
    return 0;
}
