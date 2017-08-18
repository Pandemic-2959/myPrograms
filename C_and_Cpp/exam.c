#include<stdio.h>
#include<conio.h>
void main()
{
    int s=7;
    //scanf("%d",&s);
    int a[7]={5,3,6,9,1,2,8};
    int i,sum=34,j=0,s1=0,s2=0;
    //for(i=0;i<s;i++)
    //{
     //   scanf("%d",&a[i]);
      //  sum=sum+a[i];

    //}
    if(sum%2!=0)
        printf("given array can not be divided into two arrays");
    else
    {

            int b[s],c[s];
            i=0;
            while(s1<=(sum/2))
            {
                if((s1+a[i])<(sum/2))
                {
                    s1=s1+a[i];
                    b[j++]=a[i++];
                }
                else{i++;}

            }
            for(i=0;i<j;j++)
                printf("%d",b[i]);




    }







}
