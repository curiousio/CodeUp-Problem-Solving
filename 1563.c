int mid(int n, int m, int x)
{
    int big, small;

    big = max(n, m);
    big = max(x, big);

    small = min(n, m);
    small = min(x, small);

    return (n + m + x) - (big + small);
}
