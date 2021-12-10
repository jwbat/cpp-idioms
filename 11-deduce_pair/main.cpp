#include <iostream>
#include <string>

using std::cout; using std::string; using std::pair;

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
    pair p1{ 9, "A" };
    pair p2{ "A", 9 };
    pair p3{ "A", "B" };

    print(p1);
    print(p2);
    print(p3);

    cout << "\n";
    return 0;
}
