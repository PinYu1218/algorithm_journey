#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include <vector>

namespace quicksort
{
int partition(std::vector<int> &vec, int front, int end);
void sort(std::vector<int> &vec, int front, int end);
} // namespace quicksort

#endif