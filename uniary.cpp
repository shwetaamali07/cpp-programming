
#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    void operator++() {
        ++x;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n(10);

    cout << "Before increment: ";
    n.display();

    ++n;

    cout << "After increment: ";
    n.display();

    return 0;
}
