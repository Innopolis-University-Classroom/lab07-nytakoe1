template < typename T >
void multiples (T& sum, T x, int n)
{
    sum=1;
    for(int i=1; i<=n; i++)
        sum+=x*i;
}
