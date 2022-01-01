#include <iostream>
#include <iomanip>
#include <string>

using std::cout; using std::setw; using std::initializer_list;

struct A {
    A(const initializer_list<int>& lst) {
        cout << "\n";
        for (auto n : lst) {
            cout << setw(5) << n;
        }
        cout << "\n\n";
    }
};

int main() {

    A a{ 1, 2, 3 };

    return 0;
}
