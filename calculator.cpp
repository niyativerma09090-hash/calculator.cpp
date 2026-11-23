
#include <iostream>
using namespace std;

// Base class
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

// Derived class
class Calculation : public Calculator {
public:
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Calculation obj;

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << obj.add(a, b) << endl;
    cout << "Multiplication = " << obj.multiply(a, b) << endl;

    return 0;
}
