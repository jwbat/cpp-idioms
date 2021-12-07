//#include "tuple.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <tuple>
#include <ranges>

using std::cout; using std::setw; using std::string;
using std::tuple; using std::make_tuple;
using std::ranges::views::iota;

void nl(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\n"; }
void tab(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\t"; }
template <typename T> void print(T x) { cout << x; }


void print_tuple(tuple<char, int, int>& t) {
    cout << '(' << get<0>(t) << ", " 
                << get<1>(t) << ", "
                << get<2>(t) << ')';
}

int main() {
    tuple<char, int, int> t;
    t = make_tuple('x', 4, 5);

    nl(1); tab();
    print_tuple(t);
    nl(2);

    return 0;
}
