
#include <stdio.h>

int main()
{
    int n,x,pozitiv=0,negativ=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &x);
        if(x>0)
            pozitiv++;
        else
            negativ++;
    }
    printf("%d %d",negativ,pozitiv);
    return 0;
}
