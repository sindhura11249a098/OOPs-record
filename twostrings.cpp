#include <iostream>
#include <string>
using namespace std;

class AddString {
private:
    string str;
public:
    
    AddString() {}

    
    AddString(string s) {
        str = s;
    }

    
    AddString operator+(const AddString &obj) {
        AddString temp;
        temp.str = str + " " + obj.str;  
        return temp;
    }

    
    void display() const {
        cout << str << endl;
    }
};

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    AddString str1(s1);
    AddString str2(s2);

    AddString result = str1 + str2; 

    cout << "\nResult of string addition: ";
    result.display();

    return 0;
}
