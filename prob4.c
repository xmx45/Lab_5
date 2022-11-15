#include <stdio.h>

int main(){
    int a[100][100],b[100][100],m,n,p,q,c[100][100];
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&p,&q);
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    if(n!=p)
        printf("imposibil");
    else {
        printf("%d %d\n", m, q);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                int sum=0;
                for(int k=0;k<m;k++)
                    sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    for (int i = 0; i < m; i++) {

        for (int j = 0; j < q; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}