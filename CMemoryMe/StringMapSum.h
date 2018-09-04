#pragma once
#include <string>
#include <map>

template <typename IValue>
class StringMapSum
{
public:
    StringMapSum();
    ~StringMapSum();

    void clear();
    void update(const std::string &key, IValue value);
    IValue sum() const;

protected:

    std::map<std::string, IValue> m_data;
    IValue m_sum;
};



