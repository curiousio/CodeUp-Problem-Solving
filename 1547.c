int prime(int n)
{
    int i;
    
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    return i == n;
}
