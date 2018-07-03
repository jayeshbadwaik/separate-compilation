#include "a.hpp"
// a_func.cpp
template<std::size_t dim>
std::size_t A<dim>::func()
{
    return a_+dim;
}


template class A<2>;
template class A<3>;
