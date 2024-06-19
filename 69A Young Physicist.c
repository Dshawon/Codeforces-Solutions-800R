#include <stdio.h>
int main()
{
    int i,n,a,b,c,s,t,u;
    s=0;
    t=0;
    u=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        s=s+a;
        t=t+b;
        u=u+c;
    }
    if (s==0 && t==0 && u==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
