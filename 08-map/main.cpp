#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using std::cout; using std::setw; using std::string;
using std::map; using std::tie; using std::boolalpha;

void map_insert(map<int, string>& m, int i, string s);

int main() {

    map<int, string> m;
    map_insert(m, 1, "one");
    map_insert(m, 2, "two");
    map_insert(m, 3, "three");
    map_insert(m, 1, "one");



    return 0;
}

void map_insert(map<int, string>& m, int i, string s) {
    map<int, string>::iterator it;
    bool inserted;
    tie(it, inserted) = m.insert({ i, s });
    cout << boolalpha 
         << "\n\t inserted = " << setw(10) << inserted
         << "\n\t key      = " << setw(10) << it->first
         << "\n\t value    = " << setw(10) << it->second
         << "\n\n";
}
