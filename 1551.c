int f(int k)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        if (d[i] == k)
        {
            return i;
        }
    }

    return -1;
}
