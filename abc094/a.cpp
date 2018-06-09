#include <cstdio>

int main()
{
    int a, b, x;
    scanf("%d %d %d", &a, &b, &x);
    if(a <= x && x <= a+b)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
