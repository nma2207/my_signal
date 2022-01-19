#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int t(B& b, int a)
{
    b.myFunction(a);
}


int main()
{
    A a;
    B b;

    a.signal().connect([&b](int a){b.myFunction(a);});
    a.call(10);

}
