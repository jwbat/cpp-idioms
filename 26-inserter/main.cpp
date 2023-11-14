#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cout; using std::setw; using std::vector;
using std::advance; using std::inserter; using std::iota;
using std::fill_n;

void print_vector(vector<int>&);

int main()
{
    vector<int> v(20);
    iota(v.rbegin(), v.rend(), 1);
    print_vector(v);

    auto it = v.begin();
    advance(it, 3);
    fill_n(inserter(v, it), 3, 999);
    print_vector(v);

    return 0;
}


void print_vector(vector<int>& vec)
{
    for (size_t i{ 0 }; i < vec.size(); ++i) 
    {
        if (i % 10 == 0) cout << "\n";
        cout << setw(6) << vec[i];
    }
    cout << "\n\n";
}
