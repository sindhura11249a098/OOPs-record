#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudentData() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Test : virtual public Student {
protected:
    int math, english, science;

public:
    void getTestMarks() {
        getStudentData();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter English marks: ";
        cin >> english;
        cout << "Enter Science marks: ";
        cin >> science;
    }

    void displayTestMarks() const {
        displayStudentData();
        cout << "Math: " << math << ", English: " << english << ", Science: " << science << endl;
    }
};


class Address : virtual public Student {
protected:
    string city;

public:
    void getAddress() {
        getStudentData();
        cout << "Enter city: ";
        cin >> city;
    }

    void displayAddress() const {
        displayStudentData();
        cout << "City: " << city << endl;
    }
};


class Result : public Test, public Address {
private:
    int total;
    float average;

public:
    void calculateResult() {
        getTestMarks();   
        getAddress();    
        total = math + english + science;
        average = total / 3.0;
    }

    void displayResult() const {
        displayTestMarks();
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
        displayAddress();
    }
};

int main() {
    Result r1;
    cout << "--- Enter Student Result Details ---\n";
    r1.calculateResult();

    cout << "\n--- Displaying Student Result ---\n";
    r1.displayResult();

    return 0;
}
