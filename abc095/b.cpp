#include <cstdio>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int min = 1000, sum = 0, temp;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &temp);
        sum += temp;
        if(min > temp)
        {
            min = temp;
        }
    }

    printf("%d\n", n + (x - sum) / min);
    return 0;
}