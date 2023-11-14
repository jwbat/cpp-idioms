#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using std::cout; using std::setw; using std::string;
using namespace std::literals; using std::search;
using std::distance;

int main()
{

    auto s = "The quick brown fox jumps over the lazy dog."s;
    auto word = "fox"s;

    auto it = search(s.cbegin(), s.cend(), word.cbegin(), word.cend());

    if (it != s.cend())
        cout << "\n\t found " << word << " at index "
             << distance(s.cbegin(), it) << ". \n\n";


    auto sub = s.substr(s.find(word));
    cout << "\n\t " << sub << "\n\n";

    return 0;
}

