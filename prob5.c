#include <stdio.h>

int main()
{
    int n1,n2,a[1000],b[1000],c[1000],in1=0,in2=0,k=0;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
        scanf("%d",&b[i]);
    while(in1<n1&&in2<n2)
    {
        if(a[in1]==b[in2])
        {
            c[k]=a[in1];
            k++;
            c[k]=b[in2];
            in1++;
            in2++;
        }
        else if(a[in1]<b[in2]) {
            c[k] = a[in1];
            in1++;
        }
        else
        {
            c[k]=b[in2];
            in2++;
        }
        k++;
    }
    while(in1<n1)
    {
        c[k]=a[in1];
        k++;
        in1++;
    }
    while(in2<n2)
    {
        c[k]=b[in2];
        k++;
        in2++;
    }
    for(int i=0;i<k;i++)
        printf("%d ",c[i]);

    return 0;
}