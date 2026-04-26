#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char *what() const noexcept override {
        return "Age must be between 1 and 119";
    }
};

class InvalidSalaryException : public exception {
public:
    const char *what() const noexcept override {
        return "Salary must be positive";
    }
};

class InvalidHeightException : public exception {
public:
    const char *what() const noexcept override {
        return "Height must be positive";
    }
};

void vAge(int ag) {
    if (ag <= 0 || ag >= 120)
        throw InvalidAgeException();
}

void vSalary(double sl) {
    if (sl <= 0)
        throw InvalidSalaryException();
}

void vHeight(double ht) {
    if (ht <= 0)
        throw InvalidHeightException();
}

int main() {
    int ag;
    double sl, ht;

    cout << "Enter age: ";
    cin >> ag;
    try {
        vAge(ag);
        cout << "Age accepted: " << ag << endl;
    } catch (const InvalidAgeException &ex) {
        cout << "InvalidAgeException caught: " << ex.what() << endl;
    }

    cout << "Enter salary: ";
    cin >> sl;
    try {
        vSalary(sl);
        cout << "Salary accepted: " << sl << endl;
    } catch (const InvalidSalaryException &ex) {
        cout << "InvalidSalaryException caught: " << ex.what() << endl;
    }

    cout << "Enter height: ";
    cin >> ht;
    try {
        vHeight(ht);
        cout << "Height accepted: " << ht << endl;
    } catch (const InvalidHeightException &ex) {
        cout << "InvalidHeightException caught: " << ex.what() << endl;
    }

    return 0;
}
