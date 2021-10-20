

#include <stdio.h>

int firstocurance(int arr[], int len, int value)
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
            high = mid - 1;
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

int lastcouranceofNumber(int arr[], int len, int value)
{
    int low = 0;
    int high = len - 1;
    int result;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid]==value)
        {
            result=mid;
            low=mid+1;
        }
        else if(arr[mid]>value)
        {
            high=mid - 1;
        }
        else{
            low=mid+1;
        }
    }
    return result;

}

int howManyNumberPresent(int firstocurance, int lastocurance)
{
    return  (lastocurance+1) - firstocurance;
}

int main(int argc, char const *argv[])
{
    int value=8;
    int arr[] = {2, 5, 5, 6, 7, 7, 7, 8, 9, 44, 323};
    int len = sizeof(arr) / sizeof(arr[0]);
    int firstocur = firstocurance(arr, len, value);
    int last0cour = lastcouranceofNumber(arr, len, value);
    int howmany=howManyNumberPresent(firstocur,last0cour);
    printf("%d \n", firstocur);
    printf("%d \n", last0cour);
    printf(" array pesent in value repateted.  %d", howmany);
    return 0;
}
