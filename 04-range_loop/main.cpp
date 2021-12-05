#include <iostream>
#include <iomanip>
#include <vector>

using std::cout; using std::setw; using std::vector;

vector<int> get() {
    return vector<int>{ 1, 1, 2, 3, 5 };
}
 
void newline(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\n"; }

int main() {
    newline();

    for (auto&& n : get())
        cout << setw(5) << n;

    newline(2);
    return 0;
}

