#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool ok=1;
    int n,m,b[1000],contor;
    float a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%f",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++)
        scanf("%d", &b[i]);
    for(int i=0;i<m-1;i++)
        if(b[i]>b[i+1])
        {
            printf("Error");
            ok=0;
            break;
        }
    if(ok) {
        for (int i = 0; i < m - 1; i++)
        {
            contor=0;
                for(int k=0;k<n;k++)
                {
                    if(a[k]>b[i]&&a[k]<b[i+1]) {
                        contor++;
                    }
                }
                printf("%d ",contor);
            }
    }
    return 0;

}