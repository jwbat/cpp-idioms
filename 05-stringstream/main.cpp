#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using std::cout; using std::setw; using std::string; using std::stringstream;
void nl(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\n"; }
void tab(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\t"; }
void print(auto x) { cout << x; }

int main() {

    stringstream stream;
    stream << "x " << 9 << " x " << 9 << "\n\n";
    string s1 = stream.str();
    nl(); tab(2);
    print(s1);
    nl();

    //.............................................................
    string s2{ "999" };
    int x;
    stringstream(s2) >> x;
    nl(2); tab(2); print(x); nl(2);
    return 0;
    //.............................................................

    string s = "11 15 19 23";
    stringstream iss( s );

    vector<int> xs;
    int number;
    while ( iss >> number )
      xs.push_back(number);
}
