#include "utility.h"
#include <iostream>
#include <algorithm>
#include <vector>

void utl::print_vec(std::vector<int> vec)
{
    std::vector<int>::iterator it_i;
    for (it_i = vec.begin(); it_i != vec.end(); ++it_i)
    {
        std::cout << *it_i << " ";
    }
    std::cout << std::endl;
}

void utl::validate(std::vector<int> vec)
{
    std::vector<int>::iterator it_i;
    int i = 0;
    for (it_i = vec.begin(); it_i != vec.end(); ++it_i)
    {
        if (i != *it_i)
        {
            std::cout << "failed!!!" << std::endl;
            return;
        }
        ++i;
    }
    std::cout << "pass!!!" << std::endl;
}

std::vector<int> utl::get_random_vec(int size)
{
    std::vector<int> vec;

    for (int i = 0; i < size; ++i)
    {
        vec.push_back(i);
    }

    random_shuffle(vec.begin(), vec.end());

    return vec;
}