#include <iostream>
#include <iomanip>
#include <string>

using std::cout; using std::setw; using std::string;

namespace std
{
    template <class T>
    pair(T&&, const char*)->pair<T, string>;

    template <class T>
    pair(const char*, T&&)->pair<string, T>;

    pair(const char*, const char*)->pair<string, string>;
}

auto print = [] (auto const& p) { cout << "\n\t(" << p.first << ", " << p.second <<  ")\n"; };

int main()
{
    std::pair p1{ 1, "A" };
    std::pair p2{ "A", 1 };
    std::pair p3{ "A", "B" };

    print(p1);
    print(p2);
    print(p3);

    cout << "\n";
    return 0;
}
