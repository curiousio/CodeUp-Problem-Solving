long long int f(void)
{
    long long int i, min = d[1];

    for (i = 2; i <= n; i++)
    {
        if (min > d[i])
        {
            min = d[i];
        }
    }

    return min;
}
