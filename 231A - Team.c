#include <stdio.h>
int main()
{
    int n,p,v,t,sum=0;
    scanf("%d",&n); //No. of questions
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d%d",&p,&v,&t);
        if((p==1&&v==1)||(v==1&&t==1)||(t==1&&p==1))
            sum++;
    }
    printf("%d",sum);
    return 0;
}
