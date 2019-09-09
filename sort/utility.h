#ifndef _UTILITY_H
#define _UTILITY_H
#include <vector>

namespace utl
{

void print_vec(std::vector<int> vec);
void validate(std::vector<int> vec);

std::vector<int> get_random_vec(int size);

} // namespace utl

#endif