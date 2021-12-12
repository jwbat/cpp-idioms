#include <iostream>
#include <iomanip>
#include <string>
#include <regex>

using std::cout; using std::setw; using std::string;
using namespace std::string_literals; using std::boolalpha;
using std::regex; using std::regex_constants::icase; using std::regex_match;

// match valid email addresses
constinit auto pattern {R"(^[A-Z0-9.%+-]+@[A-Z0-9.-]+\.[A-Z]{2,}$)"s};
auto rx = regex{ pattern, icase };

int main()
{

    auto valid = regex_match("jwb@domain.com", rx);

    cout << boolalpha
         << "\n\t valid:  " << valid
         << "\n\n";

    return 0;
}

