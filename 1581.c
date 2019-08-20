void myswap(int *a, int *b)
{
    if (*a > *b)
    {
        int temp = *b;
        *b = *a;
        *a = temp;
    }
}
