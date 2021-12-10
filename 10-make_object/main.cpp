#include <iostream>
using std::cout;

template <class T>
struct foo {
    foo(T v) : data(v) {}
    T data;
};

template <typename T>
constexpr foo<T> make_foo(T&& value) {
    return foo{ value };
}

int main() {

    auto f = make_foo(9000);

    cout << "\n\t \033[1;33m foo data: " << f.data << "\n\n";

    return 0;
}
