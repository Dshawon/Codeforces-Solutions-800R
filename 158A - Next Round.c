#include <stdio.h>
int main()
{
    int n,k,a[50],next=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) //Array thakai (i=0;i<n) hobe, not (i=1;i<=n)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
            next++;
    }
    printf("%d",next);
    return 0;
}
