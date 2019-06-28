int findi(int k)
{
    int i, locate = -1;

    for (i = 1; i <= n; i++)
    {
        if (k == d[i])
        {
            locate = i;
            break;
        }
    }

    return locate;
}
