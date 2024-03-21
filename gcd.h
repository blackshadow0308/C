
int gcd(int a, int b)
{
    int c;
    while (a % b > 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return(b);
}