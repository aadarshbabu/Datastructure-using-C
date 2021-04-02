#include <stdio.h>

int binarysearch(int arr[], int start, int size, int value)
{
    int low = start;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (value == arr[mid])
            return mid;

        else if (arr[mid] < value)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 11, 33, 44, 45, 55, 56, 69, 70,80};
    int ans = binarysearch(arr, 0, 11, 44);
    printf("%d", ans);
    return 0;
}
