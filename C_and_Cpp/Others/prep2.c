#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    gets(str);
    int l=strlen(str);
    int i,c;
    char sub[10];
    for(c=0;i<l;i++)
    {
        for(i=1;i<=l-c;i++)
            {strncpy(sub,&str[c],i+1);
            sub[c+i+1]='\0';
             puts(sub);}
    }
    return 0;
}
