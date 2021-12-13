#include <iostream>
#include <iomanip>
#include <string>
#include <regex>

using std::cout; using std::setw; using std::string;
using namespace std::string_literals; using std::boolalpha;
using std::regex; using std::regex_constants::icase; using std::regex_match;

// match valid email addresses

bool is_valid_email_format(const string& email)
{
    auto pattern {R"(^[A-Z0-9.%+-]+@[A-Z0-9.-]+\.[A-Z]{2,}$)"s};
    auto rx = regex{ pattern, icase };
    return regex_match(email, rx);
}

int main()
{
    cout << boolalpha
         << "\n   email is valid:  " << is_valid_email_format("jwb@domain.com")
         << "\n\n";

    return 0;
}

