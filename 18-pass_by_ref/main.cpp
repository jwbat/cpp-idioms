#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>

using std::cout; using std::setw; using std::strlen;
using std::vector;

template <typename T> 
void f(T&);
template <typename T, typename U> 
void g(T&, U&);
template <typename T>
vector<int> h(T&);
template <typename T>
void print_vector(T);

int main()
{
    const char ltrs[] = "abcdefg";
    f(ltrs);

    constexpr size_t size = strlen(ltrs);
    char msg[size + 1];
    g(ltrs, msg);
    f(msg);

    vector<int> v = h(ltrs);
    vector<int> v2 = h(msg);
    print_vector(v);
    print_vector(v2);

    cout << "\n\n";
    return 0;
}

template <typename T>
void f(T& t)
{
    cout << "\n\t" 
         << t 
         << "\n";
}

template <typename T, typename U> 
void g(T& t, U& u)
{
    for (size_t i{ 0 }; i < strlen(t); ++i)
        u[i] = t[i] + 19;
}

template <typename T>
vector<int> h(T& t)
{
    vector<int> xs;
    for (size_t i{ 0 }; i < strlen(t); ++i)
        xs.push_back(static_cast<int>(t[i]));
    return xs;
}

template <typename T>
void print_vector(T t)
{
    cout << "\n";
    for (int n : t)
        cout << setw(6) << n;
    cout << "\n";
}
