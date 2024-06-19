#include <stdio.h>
int main()
{
    int n,x=0,i;
    char s[4];                //∵"x++", tai limit 4
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);        //string hole '&' lagena
        if(s[1]=='+')         //s[1] means the second index. Ex: if 'x++' then the middle one.
            x++;
        else
            x--;
    }
    printf("%d",x);
    return 0;
}
