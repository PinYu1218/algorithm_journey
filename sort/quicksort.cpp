#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int *arr, int front, int end)
{
    int pivot = arr[end];

    // i will be the index of pivot.
    int i = front - 1;

    for (int j = front; j <= end; ++j)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[j], arr[++i]);
        }
    }

    return i;
}

// use print_arr if you need.
void print_arr(int *arr, int front, int end)
{
    for (int i = front; i <= end; i++)
    {
        if (i)
        {
            cout << " ";
        }
        cout << arr[i];
    }
    cout << endl;
}

void quicksort(int *arr, int front, int end)
{

    if (front < end)
    {
        int idx_pivot = partition(arr, front, end);
        quicksort(arr, front, idx_pivot - 1);
        quicksort(arr, idx_pivot + 1, end);
    }
}

int main()
{
    int arr[10] = {1, 9, 2, 8, 3, 7, 6, 5, 4, 10};
    quicksort(arr, 0, 9);
}