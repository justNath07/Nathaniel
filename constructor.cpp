#include <iostream>
using namespace std;

class Sample {
    int x;

public:
    // Default constructor
    Sample() {
        x = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized constructor
    Sample(int val) {
        x = val;
        cout << "Parameterized Constructor called\n";
    }

    // Copy constructor
    Sample(const Sample &s) {
        x = s.x;
        cout << "Copy Constructor called\n";
    }

    // Destructor
    ~Sample() {
        cout << "Destructor called for x = " << x << endl;
    }

    void show() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Sample s1;               // Default constructor
    Sample s2(100);          // Parameterized constructor
    Sample s3 = s2;          // Copy constructor
    s1.show();
    s2.show();
    s3.show();
    return 0;
}
