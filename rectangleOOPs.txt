#include <iostream>
using namespace std;

class Rectangle {
    int len, brth;

public:
    void get_data(int l, int b) {
        len = l;
        brth = b;
    }

    void display() {
        cout << "Length: " << len << endl;
        cout << "Breadth: " << brth << endl;
        cout << "Area: " << len * brth << endl;
    }
};

int main() {
    Rectangle r;
    r.get_data(22, 33);
    r.display();
    return 0;
}
