#include <iostream>
#include <iomanip>
#include <string>
#include <string_view>

using std::cout; using std::setw; using std::string;
using std::string_view;

constinit const auto print = [] (string_view s) { cout << s << "\n"; };

int main()
{

    constinit static auto c{ "X" };

    print("hoosegow");
    print(c);

    return 0;
}

