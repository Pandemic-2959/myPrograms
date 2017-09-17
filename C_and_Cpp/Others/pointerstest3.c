#include<stdio.h>
void main()
{int arr[3];
 arr[0]=2;
 arr[1]=3;
 arr[2]=9;
int *p;
int *q;
p=&arr[0];
q=&arr[2];
printf("%d",p-q);//subtracting pointers pointing to diff elements of same array

}


