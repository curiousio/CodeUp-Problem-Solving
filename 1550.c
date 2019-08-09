int sqrt(long long int n)
{
    long long int i;
    
    for (i = 0; i * i < n; i++);

    if (i * i == n)
    {
        return i;
    }
    else
    {
        return i - 1;
    }
}
