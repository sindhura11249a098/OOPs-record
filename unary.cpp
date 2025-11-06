#include <iostream>
using namespace std;

class Count {
private:
    int value;

public:
    
    Count(int v = 0) : value(v) {}

    
    void display() {
        cout << "Value: " << value << endl;
    }

    
    Count operator++() {
        ++value;
        return *this;
    }

    
    Count operator++(int) {
        Count temp = *this;
        value++;
        return temp;
    }

    
    Count operator--() {
        --value;
        return *this;
    }

    
    Count operator--(int) {
        Count temp = *this;
        value--;
        return temp;
    }
};

int main() {
    Count c1(10);

    cout << "Initial ";
    c1.display();

    cout << "\nUsing prefix increment (++obj):\n";
    ++c1;
    c1.display();

    cout << "\nUsing postfix increment (obj++):\n";
    c1++;
    c1.display();

    cout << "\nUsing prefix decrement (--obj):\n";
    --c1;
    c1.display();

    cout << "\nUsing postfix decrement (obj--):\n";
    c1--;
    c1.display();

    return 0;
}
