long long int subsetsum(int a, int b)
{
    long long int i, sum = 0;

    for (i = a; i <= b; i++)
    {
        sum += d[i];
    }

    return sum;
}
