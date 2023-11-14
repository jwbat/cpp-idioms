#include <iostream>
#include <iomanip>
#include <vector>

using std::cout; using std::setw;
using std::vector; using std::back_insert_iterator;
using std::fill_n;

int main() {

    vector<int> v;

    // deduces back_insert_iterator<v<int>> since c++17
    fill_n(back_insert_iterator(v), 5, 42);

    cout << "\n";
    for (auto n : v) {
        cout << setw(5) << n;
    }
    cout << "\n\n";

    return 0;
}
