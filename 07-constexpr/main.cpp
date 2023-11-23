#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>

using std::cout; using std::setw; using std::string;
using std::vector; using std::memset;

/*
 * constexpr function rules:
 *   1) a single return statement
 *   2) only call other functions that are constexpr
 *   3) only reference constexpr global variables
 *   4) is const, implicitly
*/


constexpr void newline(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\n"; }
constexpr void tab(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\t"; }
template <typename T> constexpr void print(T x) { cout << x; }

constexpr int add(int a, int b) { return a + b; }

void fast_zero(vector<int>& v) 
{
    memset(v.data(), 0, v.size() * sizeof(int));
}

int main() {
    newline(); tab(); print(add(5, 7));

    vector<int> xs(10);
    fast_zero(xs);

    newline(2);
    for (auto n : xs)
        cout << setw(5) << n;
    newline(2);
    return 0;
}
