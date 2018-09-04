#include "StringMapSum.h"
#include <iostream>
#include <map>
#include <ComprehandVirtual.h>

void testTemplateMap()
{
    std::cout << "hello world my comming" << std::endl;

    std::map<int, StringMapSum<int>>  m_data;

    m_data[1].update("1", 1);
    m_data[1].update("2", 1);
    m_data[1].update("3", 1);

    std::cout << "out put dats: " << m_data[1].sum();
    getchar();


    return;
}

int main()
{
    JP::Base ba;

    ba.vFunc1();

    getchar();
    return 0;
}