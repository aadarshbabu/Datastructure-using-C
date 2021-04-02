
#include <stdio.h>
int howmanytimes(int firstocur, int lastcourace )
{
    return (lastcourace+1)-firstocur;
}

int ocurance(int arr[], int len, int value, int first)
{

    int low = 0;
    int high = len - 1;
    int result;

    while (low <= high)
    {
       int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            result = mid;
            if(first)
                high = mid - 1;
            else
                low=mid+1;
        }
        else if (arr[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
     int value=7;
     int arr[] = {2, 5, 5, 6, 7, 7, 7, 8, 9, 44, 323};
     int len = sizeof(arr) / sizeof(arr[0]);
        int firstocur = ocurance(arr, len, value,1);
        int last0cour = ocurance(arr, len, value,0);
        printf("%d \n", firstocur);
        printf("%d \n", last0cour);
        int howmany=howmanytimes(firstocur,last0cour);
        printf("%d \n", howmany);

    return 0;
}
