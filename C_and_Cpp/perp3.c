#include<stdio.h>
#include<string.h>
int fn(int i)
{
    int s=0;
    if(i>0)
    {
        s=(i%10)+fn(i/10);
        return s;
    }
    else
        return  s;

}
void main()
{
   int n;
   scanf("%d",&n);
   int s=fn(n);
   printf("%d",s);
}



