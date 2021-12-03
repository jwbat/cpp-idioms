#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void print1() {
    cout << "\n one \n\n";
}

void print2() {
    cout << "\n two \n\n";
}

using fptr = void (*) ();

vector<fptr> funcs { print1, print2 };

int main() {

    for (auto f : funcs) {
        f();
    }

    return 0;
}

