#include <stdio.h>

int main()
{
    int a[1000000]={0},n,m,b,e,v;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d %d %d",&b,&e,&v);
        for(int j=b;j<=e;j++)
            a[j]+=v;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}