#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define llu unsigned long long int
#define lim 1000050
bool b[lim]={0};
int ten[8]={1,10,100,1000,10000,100000,1000000,10000000};

int digi(int n)
{
    for(int i=1;i<8;i++)
    {
        if(ten[i]>n)
            return i;
    }
    return 8;
}

int fun(int n)
{
    int x=digi(n);
    int m=n,a[x]={0},i=0;
    while(m)
    {
        a[i++]=m%10;
        m/=10;
    }m=n;
    int w=0;
    for(int i=0;i<x;i++)
    {
        w=0;
        if(i==0)
            w=n;
        else
        {
            int j=i;
            for(int ii=0;ii<x;ii++)
            {
                if(j==x)
                    j=0;
                w+=(a[j]*(ten[ii]));
                j++;
            }
        }
        //cout<<i<<" "<<w<<" "<<(!b[w])<<endl;
        if(b[w])
           return 0;
    }
    return 1;
}

int main() {
    b[0]=b[1]=1;
    for(int i=4;i<lim;i+=2)
        b[i]=1;
    for(int i=3;i*i<=lim;i++)
    {
        if(!b[i])
        {
            for(int j=i*i;j<lim;j+=i)
                b[j]=1;
        }
    }
    int n;
    cin>>n;
    llu c=0,ans=0;
    for(int i=2;i<n;i++)
    {
        if(fun(i)){
            c++;
            ans+=i;
        }
    }
    cout<<ans<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

