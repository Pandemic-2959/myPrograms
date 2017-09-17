#include<stdio.h>
struct cmplx
{
    int real;
    int imaginary;
};
void read(struct cmplx *r1,struct cmplx *r2)
{
    printf("\nenter real and imaginary part of 1st cmplx num\n");
    scanf("%d%d",&r1->real,&r1->imaginary);
    printf("\nenter real and imaginary part of 2nd cmplx num\n");
    scanf("%d%d",&r2->real,&r2->imaginary);
}
void calc(struct cmplx *r1,struct cmplx *r2,struct cmplx *r3)
{
    r3->real=r1->real + r2->real;
    r3->imaginary=r1->imaginary + r2->imaginary;
    printf("\nsum is %d + %d i",r3->real,r3->imaginary);
}
void main()
{
  struct cmplx p1,p2,p3;
  read(&p1,&p2);
  calc(&p1,&p2,&p3);
}
