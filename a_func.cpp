#include "a.hpp"
// a_func.cpp
template<>
auto A<2>::func()
{
    return a_;
}

template<>
auto A<3>::func()
{
    return a_+ 1;
}

