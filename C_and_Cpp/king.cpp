#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int prime(int t)
{
    int i=2;
    for(i=2;i<t;i++)
    {
        if(t%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    int i;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int q;
    int b[q];
    int k=0;
    cin>>q;
    for(i=0;i<q;i++)
    {    b[k]=0;
        int x=0;
        int l;
        int r;
        cin>>l>>r;
        for(;l<=r;l++)
        {
          b[k]=b[k]+prime(l);

        }
        k++;


}
for(k=0;k<q;k++)
{
    cout<<b[k]<<endl;
}
}
