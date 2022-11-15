#include <stdio.h>

int main()
{
    int a[100],n,lungime=1,lmaxim=-1,inceput,sfarsit;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            lungime++;
        }
        else
        {
            if(lungime>lmaxim)
            {
                lmaxim=lungime;
                inceput=i-lungime+1;
                sfarsit=i;
            }
            lungime=1;
        } // 9
        // 5 3 6 2 4 6 8 4 1
    }
    for(int i=inceput;i<=sfarsit;i++)
        printf("%d ",a[i]);
    return 0;
}