#include <iostream>
#include <iomanip>
using namespace std;
/*
 *  "almost always auto"
*/
auto add = [] (auto const a, auto const b) { return a + b; };

auto square = [] (auto const x) { return x * x; };
auto cube = [] (auto const x) { return x * x * x; };

template <typename F, typename T>
auto apply_f(F&& f, T val) {
    return f(val);
}

int main() {
    cout << "\n";

    cout << "\n\t 1.1 + 3.3 = " << add(1.1, 3.3)
         << "\n\n";

    cout << "\t 25 squared is " << apply_f(square, 25)
         << "\n\n";
    cout << "\t 25 cubed is " << apply_f(cube, 25)
         << "\n\n";

    return 0;
}

