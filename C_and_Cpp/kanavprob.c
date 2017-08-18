#include<stdio.h>
void main()
{
    int n=5;
    int i=0;
    int space=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        space=5-i;
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(j=i+1;j<=(2*i+1);j++)
        {
            printf("%d",j);
        }
        for(j=2*i;j>i;j--)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}
