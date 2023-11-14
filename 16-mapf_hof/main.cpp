#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>
#include <string>

using std::cout; using std::setw; using std::vector; using std::transform; using std::string;
using std::begin; using std::end; using std::forward; using std::map;

template <typename F, typename R>
R mapf(F&& func, R range)
{
    transform(begin(range), end(range), begin(range), forward<F>(func));
    return range;
}

template <typename F, typename T, typename U>
map<T, U> mapf(F&& f, const map<T, U>& m)
{
    map<T, U> r;
    for (const auto kvp : m)
        r.insert(f(kvp));
    return r;
}

auto square = [] (auto n) { return n * n; };

int main()
{
    vector<int> v1{ 1, 2, 3, 4, 5 };
    vector<int> v2 = mapf(square, v1);
    cout << "\n";
    for (auto n : v2) cout << "  " << n;
    cout << "\n\n";

    //===================================================

    map<string, int> m{ { "three", 3 }, { "twenty", 20 } };
    for (const auto& [key, val] : m)
        cout << setw(10) << key << " :" 
             << setw(5)  << val << "\n\n";

    //===================================================

    return 0;
}
