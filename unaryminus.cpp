#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    
    Number(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    
    void display() const {
        cout << "x = " << x << ", y = " << y << endl;
    }

    
    void operator-() {
        x = -x;
        y = -y;
    }
};

int main() {
    Number n1(5, -10);

    cout << "Before overloading minus operator:" << endl;
    n1.display();

    
    -n1;

    cout << "\nAfter overloading minus operator:" << endl;
    n1.display();

    return 0;
}
