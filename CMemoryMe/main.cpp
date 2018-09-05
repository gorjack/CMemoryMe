#include "StringMapSum.h"
#include <iostream>
#include <map>
#include <ComprehandVirtual.h>
#include <stdio.h>

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

void justAddress()
{
    //%p 这是地址寻址所以64位 8字节 32位 4字节。  而%x 是代表int型的对于64位软件就有问题了
    //int a = 10;
    //printf("a地址: %p = %d = 0x%x. 占用 %d个字节\n", &ba, &ba, &ba, sizeof(&a));
    //std::cout << "a地址:" << static_cast<void *>(&a);
}

typedef void(*Func)(void);

int main()
{
    JP::Base *ba = new JP::Base;

    //std::cout << "虚函数地址: " << (int *)(&ba) << std::endl;
    //printf("虚函数地址: %p\n", &ba);

    //Func pFun = (Func)*((int *)(*(int *)(&ba)));
    //pFun = (Func)*((int *)*ba);

    //pFun();
    ba->vFunc1();

    JP::Base *bap = new JP::Base;

    bap->vFunc1();

    getchar();
    return 0;
}