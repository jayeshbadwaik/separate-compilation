#include "a.hpp"

// a_constructor.cpp
template<>
A<2>::A(std::size_t a) : a_(a)
{
}

template<>
A<3>::A(std::size_t a) : a_(a)
{
}
