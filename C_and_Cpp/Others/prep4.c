#include<stdio.h>
void main()
{
int i=10;
int *pi;
pi=&i;
double j=1.0;
double *pj=&j;
int arr[5];
printf("%d",sizeof(arr));
printf("%d",sizeof(pj));//size of pointer to double is 4 bytes but size of double datatype is 8 bytes
printf("%d",sizeof(pi));
printf("%d",sizeof(j));
printf("%d",sizeof(i));
}
