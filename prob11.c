#include <stdio.h>
#include <math.h>

int main()
{
    double x,rezultat=0;
    int n,c[50];
    scanf("%lf%d",&x,&n);
    for(int i=0;i<=n;i++)
        scanf("%d",&c[i]);
    for(int i=0;i<=n;i++)
    {
        rezultat+= pow(x,c[n-i-1])*c[i];
    }
    printf("%.2lf",rezultat);
    return 0;
}