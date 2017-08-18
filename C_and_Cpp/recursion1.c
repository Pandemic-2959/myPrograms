#include<stdio.h>
#include<string.h>
int fun(int x,int y)
{ int r=0;
  if(x%y==0)
  {
      r=1+fun(x/y,y);
      return r;
  }
  else
    return r;
}
void main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int result=fun(m,n);
    printf("%d",result);
}

