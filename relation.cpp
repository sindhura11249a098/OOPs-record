#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float height;  

public:
    
    void getData() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter height (in cm): ";
        cin >> height;
    }

    
    void display() const {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }

    
    bool operator>(const Student &s) const {
        return height > s.height;
    }

    
    bool operator<(const Student &s) const {
        return height < s.height;
    }

    bool operator==(const Student &s) const {
        return height == s.height;
    }

    
    string getName() const {
        return name;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for first student:\n";
    s1.getData();

    cout << "\nEnter details for second student:\n";
    s2.getData();

    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();

    cout << "\n--- Comparison Result ---\n";

    if (s1 > s2)
        cout << s1.getName() << " is taller than " << s2.getName() << endl;
    else if (s1 < s2)
        cout << s2.getName() << " is taller than " << s1.getName() << endl;
    else
        cout << "Both students have the same height." << endl;

    return 0;
}

