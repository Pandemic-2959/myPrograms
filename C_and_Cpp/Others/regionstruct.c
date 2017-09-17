#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20];
    gets(str);
    int l=strlen(str);
    int i=0,c=1;
    for(i=0;i<l-1;i++)
    {
       if(str[i]==str[i+1])
            c++;
       else
       {
           printf("%c %d\n",str[i],c);
           c=1;
       }
    }
    if(str[l-1]==str[l-2])
    {
         printf("%c %d\n",str[l-1],c);
    }
    else
      printf("%c 1\n",str[l-1]);
    getch();
}
