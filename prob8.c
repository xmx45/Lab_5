#include <stdio.h>

int main()
{
    int a[100],n,suma,smax=-1,inceput,sfarsit;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        suma=a[i];
        for(int j=i+1;j<n;j++) {
            suma += a[j];
            if (suma > smax) {
                inceput = i;
                sfarsit = j;
                smax=suma;
            }
        }
    }
    for(int i=inceput;i<=sfarsit;i++)
        printf("%d ",a[i]);
    return 0;
}