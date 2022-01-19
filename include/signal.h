#pragma once

#include <functional>
#include <vector>

template<class... T>
class Signal
{
public:
    void connect(std::function<void(T...)> slot)
    {
        m_slots.push_back(slot);
    }
    void emit(T... args)
    {
        for(auto slot: m_slots)
        {
            slot(args...);
        }
    }
private:
    std::vector<std::function<void(T...)>> m_slots;

};
