#include<stdio.h>
int main()
{
    int t,m,n,r,i,j,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        c=0;
        for(j=m;j<=n;j++)
        {
            r=j%10;
            if(r==2||r==3||r==4)
            c++;
        }
        printf("%d
",c);
        }
    }
