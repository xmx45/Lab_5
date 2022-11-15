#include <stdio.h>

int main()
{
    int n,a[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(int j=1;j<n;j++)
        {
            for(int i=1;i<n;i++)
                if(i+j>n-1)
                    printf("%d ",a[i][j]);

        }
    return 0;

}