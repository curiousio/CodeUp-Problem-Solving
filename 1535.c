int f(void)
{
    int i, index = 0, max = d[0];

    for (i = 1; i < n; i++)
    {
        if (max < d[i])
        {
            max = d[i];
            index = i;
        }
    }

    return index + 1;
}
