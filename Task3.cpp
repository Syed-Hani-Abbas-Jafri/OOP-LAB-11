#include <iostream>
using namespace std;

template <typename A, typename B>
class Pair {
    A mx;
    B ny;
public:
    Pair(A p1, B p2) : mx(p1), ny(p2) {}
    void display() {
        cout << "Pair: (" << mx << ", " << ny << ")" << endl;
    }
};

int main() {
    Pair<int, string> kv1(5, "Hello");
    kv1.display();

    Pair<double, int> kv2(3.14, 42);
    kv2.display();

    return 0;
}
