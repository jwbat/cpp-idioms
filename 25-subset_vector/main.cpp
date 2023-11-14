#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cout; using std::setw; using std::boolalpha;
using std::vector;
using std::back_inserter; using std::includes; using std::iota;

int main()
{
    vector<int> v1(10);
    iota(v1.begin(), v1.end(), 1);

    vector<int> v2{ 3, 4, 5 };

    auto v2_is_subset_of_v1 = includes(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend());

    cout << boolalpha 
         << "\n\t" << v2_is_subset_of_v1 << "\n\n";

    return 0;
}
