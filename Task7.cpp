#include <iostream>
#include <string>
using namespace std;

class OutOfBoundsException : public exception {
public:
    const char *what() const noexcept override {
        return "Invalid index access attempted!";
    }
};

template <typename T>
class SmartArray {
    T *dta;
    int sz;
public:
    SmartArray(int n) : sz(n) { dta = new T[n]; }
    ~SmartArray() { delete[] dta; }
    T &operator[](int idx) {
        if (idx < 0 || idx >= sz)
            throw OutOfBoundsException();
        return dta[idx];
    }
    int size() const { return sz; }
};

int main() {
    int ns;
    cout << "Array size: ";
    cin >> ns;

    SmartArray<int> ixArr(ns);
    cout << "Enter elements: ";
    for (int i = 0; i < ns; i++) cin >> ixArr[i];

    cout << "Accessing index 2: " << ixArr[2] << endl;

    cout << "Accessing index " << ns << ":" << endl;
    try {
        cout << ixArr[ns] << endl;
    } catch (const OutOfBoundsException &ex) {
        cout << "OutOfBoundsException caught: " << ex.what() << endl;
    }

    SmartArray<string> sxArr(3);
    sxArr[0] = "Alpha"; sxArr[1] = "Beta"; sxArr[2] = "Gamma";
    cout << "Accessing string index 1: " << sxArr[1] << endl;

    try {
        cout << sxArr[10] << endl;
    } catch (const OutOfBoundsException &ex) {
        cout << "OutOfBoundsException caught: " << ex.what() << endl;
    }

    return 0;
}
