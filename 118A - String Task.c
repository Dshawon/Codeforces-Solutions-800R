#include <stdio.h>
int main()
{
    char s[101],a[201];
    scanf("%s",s);
    int len=strlen(s), j=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&
        s[i]!='U'&&s[i]!='Y'&&s[i]!='a'&&s[i]!='e'&&
        s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
        {
            a[j]='.';
            j++;

            if(s[i]>='A' && s[i]<='Z'){
                a[j]=s[i]+32;
                j++;
            }
            else{
                a[j]=s[i];
                j++;
            }

        }

    }
    a[j]='\0';
    puts(a);
}
