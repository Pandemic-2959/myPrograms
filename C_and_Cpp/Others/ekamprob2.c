#include<stdio.h>
#include<string.h>
void findsubstring(char *a,char *b)
{
    int l1=strlen(a);
    int l2=strlen(b);
    int i=0;
    int count=0;
    for(i=0;i<l1-l2+1;i++)
    {if(*a==*b)
        {
            if(strncmp(a,b,l2)==0)
            {
               count++;
            }
            a++;
        }
        else
            a++;

    }
    printf("%d",count);
}
void main()
{
   char str1[20];
   char str2[10];
   gets(str1);
   gets(str2);
   findsubstring(str1,str2);
   getch();
}
