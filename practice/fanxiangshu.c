#include <stdio.h>
#include <math.h>
int f(int x);
int main()
{
    int a[10][2], b[10];
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
            a[i][j] = f(a[i][j]);
        }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i][0] + a[i][1];
        b[i] = f(b[i]);
        printf("%d\n", b[i]);
    }
    return 0;
}
int f(int x)
{
    int sum = 0, m = x, a, ws = 0, i = 0;
    while (m > 0)
    {
        m = m / 10;
        ws++;
    }
    m = x;
    while (m > 0)
    {
        a = m % 10;
        sum += pow(10, ws) * a;
        ws--;
        m = m / 10;
    }
    sum=sum/10;
    return sum;
}