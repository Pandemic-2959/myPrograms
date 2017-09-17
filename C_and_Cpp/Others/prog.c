#include<stdio.h>
#include<string.h.>
int main()
{
    struct record
    {
        char re[20];
        char c[20];
        int area;
        int pop;
    }ob[5];
    int i=0;
    char arr[5][20];
    char ch[2];
    for(i=0;i<5;i++)
    {
        printf("record -> %d\n",(i+1));
        printf("area -> ");
        scanf("%d",&ob[i].area);
        printf("population -> ");
        scanf("%d",&ob[i].pop);
        printf("region -> ");
        fflush(stdin);
        gets(ob[i].re);
        printf("country -> ");
        gets(ob[i].c);
        strcpy(arr[i],ob[i].re);
    }
    for(i=0;i<5;i++)
    {


    }
    getch();
    return 0;


}

