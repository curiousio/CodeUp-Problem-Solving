long long int pow(int a, int n)
{
    if (n == 0 || a == 1)
    {
        return 1;
    }
    else if (n == 1)
    {
        return a;
    }
    else
    {
        long long int po = a;
        for (int i = 2; i <= n; i++)
        {
            po *= a;
        }
        return po;
    }
}
