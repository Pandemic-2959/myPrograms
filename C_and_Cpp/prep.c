#include<stdio.h>
#include<string.h>
int n;
char str[50];
void subset(int start,int index,int nsb)
{
    int i,j;
    if((index-start+1)==nsb)
    {
        if(nsb==1)
        {
            for(i=0;i<n;i++)
            {
                printf("%c\n",str[i]);
            }
        }
        else
        {
            for(j=index;j<n;j++)
            {
                for(i=start;i<index;i++)
                   printf("%c ",str[i]);
                printf("%c\n",str[j]);

            }
            if(start!=n-nsb)
            {
                subset(start +1,start+1,nsb);
            }
        }
    }
    else
    {
        subset(start,index+1,nsb);
    }
}
void main()
{
    int l;
    gets(str);
    int i=0;
    for(i=1;i<=n;i++)
    {
        subset(0,0,i);
    }
}





