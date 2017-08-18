#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a;
    cin>>a;
    long int d;
    cin>>d;
    long int N;
    cin>>N;
    long int n=(N-a+d)/d;
    cout<<(a+(n-1)*d);
    return 0;

}
