#include <cstdio>

int main()
{
    int h, w;
    scanf("%d %d", &h, &w);
    char b[52][52] = {};
    char temp[64];
    for(int i = 1; i <= h; ++i)
    {
        scanf("%s", temp);
        for(int j = 1; j <= w; ++j)
        {
            if(temp[j-1] == '#')
            {
                b[i][j] = 1;
            }
        }
    }
    for(int i = 1; i <= h; ++i)
    {
        for(int j = 1; j <= w; ++j)
        {
            if(b[i][j])
            {
                if(!(b[i-1][j] || b[i+1][j] || b[i][j-1] || b[i][j+1]))
                {
                    printf("No\n");
                    return 0;
                }
            }
        }
    }
    printf("Yes\n");
    return 0;
}
