#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using std::cout; using std::setw; using std::string; using std::stringstream;

int main() {

    stringstream strs;
    strs << " x " << 9 << " x " << 9;
    string s = strs.str();
    cout << "\n" << s << "\n\n";

    return 0;
}
