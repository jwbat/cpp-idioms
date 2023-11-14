#include <iostream>

using std::cout; using std::forward;

template <typename... Ts>
void g(Ts&& ... args)
{
    (cout << ... << args);
}

template <typename ...Ts>
void f(Ts&& ...args)
{
    g(forward<Ts>(args)...);
}

int main()
{
    cout << "\n\t";     f(5, 6, 7);
    cout << "\n\n";
    return 0;
}
