#include "a.h"

A::A()
{

}

Signal<int> &A::signal()
{
    return m_signal;
}
