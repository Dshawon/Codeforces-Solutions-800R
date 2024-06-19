#include <stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s); //"scanf" for one word and "getsf" for multiple word until \n.
    if(s[0]>=97&&s[0]<=122)
    s[0]=s[0]-32;
    printf("%s",s);
    return 0;
}
