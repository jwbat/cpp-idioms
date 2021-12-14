#include <iostream>

using std::cout; using std::forward;

template <typename ...T>
void g(T&& ... args)
{
    (cout << ... << args);
}

template <typename ...T>
void f(T&& ...args)
{
    g(forward<T>(args)...);
}

int main()
{
    cout << "\n\t";     f(5, 6, 7);
    cout << "\n\n";
    return 0;
}
