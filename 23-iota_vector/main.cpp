#include <iostream>
#include <iomanip>
#include <vector>
//#include <algorithm>
#include <numeric>

using std::cout; using std::setw; using std::vector;
using std::iota;


int main()
{
    vector<int> v(10);
    iota(v.rbegin(), v.rend(), 1); // { 10, 9, 8, ... , 1 }

    cout << "\n";
    for (auto& n : v)
        cout << setw(5) << n;
    cout << "\n\n";


    return 0;
}
