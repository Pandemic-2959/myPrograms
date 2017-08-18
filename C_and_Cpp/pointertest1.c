#include<stdio.h>
void callimg(int a[])
{
   printf("%d",sizeof(a));//print 4
}
void main()
{int arr[10];
  printf("%dagshjgjsgh",sizeof(arr));//print 40
  callimg(arr);
}
