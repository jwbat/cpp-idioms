#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <algorithm>

using std::cout; using std::setw; using std::vector;
using std::random_device; using std::mt19937; using std::uniform_int_distribution;
using std::generate; using std::generate_n;


int main()
{
    random_device rd{};
    mt19937 mt{ rd() };
    uniform_int_distribution<> ud{ 0, 9 }; // [0, 9]

    vector<int> v(10);
    generate(v.begin(), v.end(), [&ud, &mt] () { return ud(mt); });
//    generate_n(v.begin() + 2, 3, [] () { return 5; });
//    auto i = 1;
//    generate_n(v.begin(), v.size(), [&i] () { return i * i++; });

    cout << "\n";
    for (auto& n : v)
        cout << setw(5) << n;
    cout << "\n\n";


    return 0;
}
