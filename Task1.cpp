#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &q7, T &r9) {
    T zx = q7;
    q7 = r9;
    r9 = zx;
}

int main() {
    int vn1 = 5, vn2 = 10;
    cout << "Before swap: a = " << vn1 << ", b = " << vn2 << endl;
    swapValues(vn1, vn2);
    cout << "After swap: a = " << vn1 << ", b = " << vn2 << endl;

    float fp1 = 3.5f, fp2 = 7.8f;
    cout << "Before swap: x = " << fp1 << ", y = " << fp2 << endl;
    swapValues(fp1, fp2);
    cout << "After swap: x = " << fp1 << ", y = " << fp2 << endl;

    char gc1 = 'A', gc2 = 'Z';
    cout << "Before swap: ch1 = '" << gc1 << "', ch2 = '" << gc2 << "'" << endl;
    swapValues(gc1, gc2);
    cout << "After swap: ch1 = '" << gc1 << "', ch2 = '" << gc2 << "'" << endl;

    return 0;
}
