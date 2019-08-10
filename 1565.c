long long int lcd(int a, int b)
{
    return (long long int)(a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b);
}
