#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <vector>

using std::cout; using std::vector; using std::transform; 
using std::begin; using std::end; using std::forward;

template <typename F, typename R>
R mapf(F&& func, R range)
{
    transform(begin(range), end(range), begin(range), forward<F>(func));
    return range;
}

auto square = [] (auto n) { return n * n; };

int main()
{
    vector<int> v1{ 1, 2, 3, 4, 5 };
    vector<int> v2 = mapf(square, v1);

    cout << "\n";
    for (auto n : v2) cout << "  " << n;
    cout << "\n\n";
    return 0;
}
