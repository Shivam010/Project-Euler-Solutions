#include<iostream>
#include<math.h>
using namespace std;

int sum_5p_d(long int n,int m)
{
    long int a=n,ans=0;
    while(a)
    {
        ans=ans+pow(a%10,m);
        a/=10;
    }
    if(n==ans)
        return 1;
    else
        return 0;
}

int main()
{
    long int n;
    int m;
    cin>>m;
    long long unsigned int i,ans=0;
    for(i=2;i<1000000;i++)
    {
        if(sum_5p_d(i,m))
        {
            ans=ans+i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
