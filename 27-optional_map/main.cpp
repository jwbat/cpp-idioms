#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <optional>

using namespace std::string_literals;
using std::cout; using std::setw; using std::string;
using std::optional; using std::map;
 
template <typename K, typename V>
optional<V> find(const int key, const map<K, V>& m)
{
    auto it = m.find(key);
    if (it != m.end())
        return it->second;
    return {};
}


int main()
{
    map<int, string> m{ { 1, "one"s }, { 2, "two"s }, { 3, "three"s } };
    auto v = find(2, m);
    if (v)
        cout << "\n\t" << v.value() << "\n\n";

    return 0;
}

