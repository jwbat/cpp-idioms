#include <iostream>
#include <iomanip>
#include <string>

using std::cout; using std::setw; using std::forward;
using std::string; using std::to_string;

auto color = [] (int n) { return "\033[38;5;" + to_string(n) + "m"; };
string col1 = color(226); string col2 = color(189);
auto w5 = setw(5); auto w15 = setw(15); auto w20 = setw(20);

template<typename T>
void forwardToProcess(T&& arg);
void process(int& x);
void process(int&& x);
void line();

int main() 
{
  int a = 5;
  forwardToProcess(a);  // a is an lvalue
  forwardToProcess(10); // 10 is an rvalue
  line();
}

void process(int& x) 
{
  cout << "\n" << col2 << w20
       << "Lvalue processed: " << w5 << col1 << x
       << "\n";
}

void process(int&& x) 
{
  cout << "\n" << col2 << w20
       << "Rvalue processed: " << w5 << col1 << x
       << "\n";
}

template<typename T>              // perfect forwarding function template
void forwardToProcess(T&& arg) 
{
  process(forward<T>(arg));       // forward the argument maintaining its type
}

void line() { cout << "\n"; }
