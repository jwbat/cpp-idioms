#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>

using std::cout; using std::setw; using std::forward; using std::move;
using std::vector; using std::accumulate;

template <typename F, typename R, typename T>
constexpr T foldl(F&& f, R&& range, T init)
{
    return accumulate(begin(range), end(range), move(init), forward<F>(f));
}

constexpr auto mult = [] (const auto a, const auto b) { return a * b; };

int main()
{
    vector<int> v{ 4, 5, 20 };
    int product = foldl(mult, v, 1);        // 400
    cout << "\n\t" << product << "\n\n";

    return 0;
}
