#include <stdio.h>
int main()
{
    long long int n,m,a,len,wid;
    scanf("%lld%lld%lld",&n,&m,&a);
    len=n/a;
    if(n%a!=0)
        len++;
    wid=m/a;
    if(m%a!=0)
        wid++;
    printf("%lld",len*wid);
    return 0;
}
