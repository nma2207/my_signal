#pragma once

#include "signal.h"

class A
{
public:
    A();
    Signal<int>& signal();
    void call(int arg)
    {
        m_signal.emit(arg);
    }
private:
    Signal<int> m_signal;

};
