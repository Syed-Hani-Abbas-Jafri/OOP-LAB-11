#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax(T *arr, int sz) {
    T mx = arr[0];
    for (int qi = 1; qi < sz; qi++) {
        if (arr[qi] > mx)
            mx = arr[qi];
    }
    return mx;
}

int main() {
    int nArr[] = {10, 20, 5, 30, 25};
    int ns = 5;
    cout << "Array: [";
    for (int i = 0; i < ns; i++) cout << nArr[i] << (i < ns - 1 ? ", " : "");
    cout << "]" << endl;
    cout << "Maximum: " << findMax(nArr, ns) << endl;

    string sArr[] = {"Apple", "Mango", "Banana", "Peach"};
    int ss = 4;
    cout << "Array: [";
    for (int i = 0; i < ss; i++) cout << "\"" << sArr[i] << "\"" << (i < ss - 1 ? ", " : "");
    cout << "]" << endl;
    cout << "Maximum: " << findMax(sArr, ss) << endl;

    return 0;
}
