#include <iostream>
#include <stdexcept>
using namespace std;

int bxDiv(int upper, int below) {
    if (below == 0)
        throw runtime_error("Division by zero is not allowed!");
    return upper / below;
}

int main() {
    int nm, dn;
    cout << "Enter numerator: ";
    cin >> nm;
    cout << "Enter denominator: ";
    cin >> dn;

    try {
        int rs = bxDiv(nm, dn);
        cout << "Result: " << rs << endl;
    } catch (const runtime_error &ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}
