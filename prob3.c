#include <stdio.h>

int main()
{
    int a[100][100],n,m,minabs=-1,maxpelinie;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        maxpelinie=a[i][0];
        for(int j=1;j<m;j++)
        {
            if(a[i][j]>maxpelinie)
                maxpelinie=a[i][j];
        }
        if(maxpelinie<minabs||minabs==-1)
            minabs=maxpelinie;
    }
    printf("%d",minabs);
    return 0;
}