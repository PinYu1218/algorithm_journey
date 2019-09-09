#include "utility.h"
#include "quicksort.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size = 60000;
    vector<int> vec;

    // quicksort
    cout << "before quicksort:" << endl;
    vec = utl::get_random_vec(size);
    utl::print_vec(vec);

    cout << "after quicksort:" << endl;
    quicksort::sort(vec, 0, size - 1);
    utl::print_vec(vec);
    utl::validate(vec);
}