#include <stdio.h>

#define N 10000

int main()
{
    int a[N] = {0};
    int i = 0;
    int p, q, t;
    for(i = 0; i < N; i++)
        a[i] = i;
    while(scanf("%d,%d",&p,&q) == 2)
    {
        if(a[p] == a[q])    continue;
        for(t = a[p], i = 0; i < N; i++)
            if(a[i] == t)  
                a[i] = a[q];
        printf("%d-%d\n", p, q);
    }
    return 0;
}
