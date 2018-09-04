#pragma once
#include <iostream>

namespace JP
{
    class Base
    {
    public:
        virtual void vFunc1() { std::cout << "Base::vFunc1 " << std::endl; }
        virtual void vFunc2() { std::cout << "Base::vFunc2 " << std::endl; }
        virtual void vFunc3() { std::cout << "Base::vFunc3 " << std::endl; }

        void func4();
    };
}
