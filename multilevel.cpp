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

class test : public student
{
protected:
    int math, eng, sci;

public:
    void gettest()
    {
        getstudent();
        cout << "Enter math marks = ";
        cin >> math;
        cout << "Enter english marks = ";
        cin >> eng;
        cout << "Enter science marks = ";
        cin >> sci;
    }

    void displaytest()
    {
        displaystudent();
        cout << "\nMath marks = " << math;
        cout << "\nEnglish marks = " << eng;
        cout << "\nScience marks = " << sci;
    }
};

class result : public test
{
private:
    int total, avg;

public:
    void getresult()
    {
        gettest();
        total = math + eng + sci;
        avg = total / 3;
    }

    void displayresult()
    {
        displaytest();
        cout << "\nTotal Marks = " << total;
        cout << "\nAverage Marks = " << avg;
    }
};

int main()
{
    result r1;
    
    r1.getresult();
    
    r1.displayresult();
    getch();
}
