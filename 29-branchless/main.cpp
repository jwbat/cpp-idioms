#include <iostream>
#include <iomanip>
#include <string>

using std::cout; using std::setw; using std::string; using std::to_string;

auto color = [] (int n) { return "\033[38;5;" + to_string(n) + "m"; };

constexpr int a = 9;
constexpr int b = 2;

int smaller(int a, int b)   // branched
{
    if (a < b)
        return a;
    return b;
}

int smaller_branchless(int a, int b) // branchless, except not faster!
{
    return a * (a < b) + b * (b <= a);
}

void to_upper(char* d, int count)
{
    for (int i = 0; i < count; ++i)
        if (d[i] >= 'a' && d[i] <= 'z')
            d[i] -= 32;
}

char c[] = "cat";

int main()
{
    cout << color(202) << "\n\t " << c;
    to_upper(c, 3);
    cout << color(202) << "\n\t " << c
         << "\n";

    cout << color(190)
         << "\n\t" << smaller(a, b)                 // 2
         << "\n\t" << smaller_branchless(a, b)      // 2
         << "\n\t" << a << " < " << b << ": " << (a < b)
         << "\n"
         << "\n";

    return 0;
}
