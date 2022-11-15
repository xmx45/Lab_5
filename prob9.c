#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[100],n;
    bool crescator=1,descrescator=1,constant=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-13;i++)
    {
        if(a[i]>a[i+1])
        {
            crescator=0;
            constant=0;
        }
        else if (a[i]<a[i+1])
        {
            constant=0;
            descrescator=0;
        }
        else if(a[i]==a[i+1])
        {
            crescator=0;
            descrescator=0;
        }
    }
    if(crescator)
        printf("crescator");
    else if(descrescator)
        printf("descrescator");
    else if(constant)
        printf("constant");
    else
        printf("neordonat");
    return 0;
}