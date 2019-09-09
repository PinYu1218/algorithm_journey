#include "quicksort.h"
#include "utility.h"
#include <algorithm>
#include <vector>

int quicksort::partition(std::vector<int> &vec, int front, int end)
{
    int pivot = vec[end];

    // i will be the index of pivot.
    int i = front - 1;

    for (int j = front; j <= end; ++j)
    {
        if (vec[j] <= pivot)
        {
            std::swap(vec[j], vec[++i]);
        }
    }

    return i;
}

void quicksort::sort(std::vector<int> &vec, int front, int end)
{
    if (front < end)
    {
        int idx_pivot = quicksort::partition(vec, front, end);
        quicksort::sort(vec, front, idx_pivot - 1);
        quicksort::sort(vec, idx_pivot + 1, end);
    }
}