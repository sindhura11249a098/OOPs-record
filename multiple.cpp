#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class student
{
private:
    char name[20];
    int rno;

public:
    void getstudent()
    {
        cout << "Enter name of the student = ";
        cin >> name;
        cout << "Enter roll number of the student = ";
        cin >> rno;
    }

    void displaystudent()
    {
        cout << "Name of the student = " << name;
        cout << "\nRoll number of the student = " << rno;
    }
};

class address
{
private:
    char city[20];

public:
    void getaddress()
    {
        cout << "\nEnter city = ";
        cin >> city;
    }

    void displayaddress()
    {
        cout << "\nCity = " << city;
    }
};

class account : public student, public address
{
private:
    int tfee, submit, balance;

public:
    void getaccount()
    {
        getstudent();
        getaddress();
        cout << "\nEnter total fee = ";
        cin >> tfee;
        cout << "\nEnter submit fee = ";
        cin >> submit;
    }

    void displayaccount()
    {
        displaystudent();
        displayaddress();
        cout << "\nTotal fee = " << tfee;
        cout << "\nSubmit fee = " << submit;
        balance = tfee - submit;
        cout << "\nBalance fee = " << balance;
    }
};

int main()
{
    account a1;
    a1.getaccount();
    a1.displayaccount();
    getch();
}
