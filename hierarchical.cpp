#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rollNo;
    }

    void displayStudentData() const {
        cout << "Name of the student: " << name << endl;
        cout << "Roll number of the student: " << rollNo << endl;
    }
};

class BSC : public Student {
private:
    int math, physics, chemistry;

public:
    void getMarks() {
        getStudentData();
        cout << "Enter math marks: ";
        cin >> math;
        cout << "Enter physics marks: ";
        cin >> physics;
        cout << "Enter chemistry marks: ";
        cin >> chemistry;
    }

    void displayMarks() const {
        displayStudentData();
        cout << "Math marks: " << math << endl;
        cout << "Physics marks: " << physics << endl;
        cout << "Chemistry marks: " << chemistry << endl;
    }
};

class BA : public Student {
private:
    int hindi, punjabi;

public:
    void getMarks() {
        getStudentData();
        cout << "Enter hindi marks: ";
        cin >> hindi;
        cout << "Enter punjabi marks: ";
        cin >> punjabi;
    }

    void displayMarks() const {
        displayStudentData();
        cout << "Hindi marks: " << hindi << endl;
        cout << "Punjabi marks: " << punjabi << endl;
    }
};

int main() {
    int choice;
    cout << "Select Stream:\n1. BSC\n2. BA\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        BSC studentBSC;
        studentBSC.getMarks();
        cout << "\n--- BSC Student Details ---\n";
        studentBSC.displayMarks();
    } else if (choice == 2) {
        BA studentBA;
        studentBA.getMarks();
        cout << "\n--- BA Student Details ---\n";
        studentBA.displayMarks();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
