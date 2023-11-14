#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using std::cout; using std::setw;
using std::vector; using std::sort; using std::greater;


vector<int> v{ 3, 1, 47, 6, 4, 108 };

int main()
{
    sort(v.begin(), v.end(), greater<>());

    cout << "\n";
    for (auto& n : v)
        cout << setw(6) << n;

    cout << "\n\n";
    return 0;
}
