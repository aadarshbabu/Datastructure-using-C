   //You always put NUll Value in end of the array
int intLength(int *array)
{
    int length;
    int flag=0;
    while (*array)
    {
       flag++;
       *array++;
    }
    return flag;
    
}
