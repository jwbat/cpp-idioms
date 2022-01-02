#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using std::cout; using std::setw; using std::vector;
using std::merge; using std::back_inserter;

int main()
{
    vector<int> x{ 1, 2, 3 };
    vector<int> y{ 3, 88 };
    vector<int> z;

    merge(x.cbegin(), x.cend(), y.cbegin(), y.cend(), back_inserter(z));
    // z = { 1, 2, 3, 3, 88 }

    cout << "\n";
    for (auto& n : z)
        cout << setw(5) << n;
    cout << "\n\n";


    return 0;
}
