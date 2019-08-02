int maxi(int a, int b)
{
    int max = d[a];
    for (int i = a; i <= b; i++)
    {
        if (max < d[i])
        {
            max = d[i];
        }
    }
    for (int i = a; i <= b; i++)
    {
        if (max == d[i])
        {
            return i;
        }
    }
}
