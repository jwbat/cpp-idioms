#include <iostream>
#include <iomanip>

using std::cout; using std::boolalpha;


template <typename T>
struct is_pointer { static const bool value = false; };

template <typename T>
struct is_pointer<T*> { static const bool value = true; };

template <typename T>
void print_pointer(T t)
{
    static_assert(is_pointer<T>::value, "printer requires a pointer");
    if (t)
        cout << "\n\t" << *t << "\n\n";
}


int main()
{

    int* p = new int(25);
    print_pointer(p);

    delete p;
    return 0;
}
