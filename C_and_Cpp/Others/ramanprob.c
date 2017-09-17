#include<stdio.h>
#include<string.h>//calculating the frequency of each length 0f word
int main()
{
    char para[100];
    gets(para);
    int i=0;
    int s=0;
    int arr[20];
    for(i=0;i<20;i++)
    {
        arr[i]= 0;
    }
    for(i=0;para[i]!='\0';i++)
    {
        if(para[i]!=' ')
        {
           s++;
        }
        else
        {arr[s]=arr[s]+1;
            s=0;}
        if(para[i+1]=='\0')
            {arr[s]=arr[s]+1;}

    }
    for(i=0;i<20;i++)
    {
        if(arr[i]!=0)
            printf("length %d freq %d \n",i,arr[i]);
    }


return 0;

}

