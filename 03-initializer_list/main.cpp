#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using std::cout; using std::string; using std::setw; using std::setprecision;
using std::initializer_list; using std::fixed;

void print_large_int(const long double& x);

struct A {
    static const int n{ 1000 };
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

    cout << "\t" << a.n << "\n\n";

    print_large_int(pow(999, 99));

    return 0;
}

void print_large_int(const long double& x){
    cout << fixed << setprecision(0) << "\t" << x
         <<  "\n\n";
}
