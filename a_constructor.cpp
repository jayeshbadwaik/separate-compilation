#include "a.hpp"

// a_constructor.cpp
template<std::size_t dim>
A<dim>::A(std::size_t a) : a_(a)
{
}

template class A<2>;
template class A<3>;
