#include <iostream>
#include <iomanip>
#include <vector>
//#include <algorithm>
#include <string>
#include <numeric>

using std::cout; using std::setw;
using std::to_string; using std::iota; using std::vector; 
auto color = [] (int n) { return "\033[38;5;" + to_string(n) + "m"; };

int main()
{
    vector<int> v(10);
    iota(v.rbegin(), v.rend(), 1); // { 10, 9, 8, ... , 1 }

    cout << "\n" << color(190);
    for (auto& n : v)
        cout << setw(5) << n;
    cout << "\n\n";


    return 0;
}
