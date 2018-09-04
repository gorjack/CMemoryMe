#include "StringMapSum.h"


template<typename IValue>
StringMapSum<IValue>::StringMapSum()
    :m_sum(0)
{

}

template <typename IValue>
StringMapSum<IValue>::~StringMapSum()
{

}

template <typename IValue>
IValue StringMapSum<IValue>::sum() const
{
    return m_sum;
}

template <typename IValue>
void StringMapSum<IValue>::update(const std::string &key, IValue value)
{
    IValue oldValue;
    std::map<string, IValue>::iter = m_data.find(key);
    if (iter != m_data.end())
    {
        oldValue = iter->second;
    }
    else
    {
        oldValue = 0;
    }
    m_data[key] = value;
    m_sum += value - oldValue;
}

template <typename IValue>
void StringMapSum<IValue>::clear()
{
    m_data.clear();
    m_sum = 0;
}