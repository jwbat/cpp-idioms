#include <iostream>
#include <iomanip>

using std::cout; using std::setw;


template <typename T>
auto add(T head)
{
    return head;
}

template <typename T, typename... Ts>
auto add(T head, Ts... rest)
{
    return head + add(rest...);
}


// fold expression version
template <typename... T>
constexpr auto sum(T... args)
{
    return (... + args);
}


int main()
{
    cout << "\n\t"  << add(7, 7, 7) 
         << "\n\t"  << sum(7, 7, 7) 
         << "\n\n";
    return 0;
}
