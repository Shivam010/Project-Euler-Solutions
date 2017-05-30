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

int fun(int n)
{
    int m=n;int c=0;
    while(m)
    {
        if(b[m])
            return 0;
        m/=10;c++;
    }//cout<<"R";
    while(c>1)
    {
        n=n%(ten[--c]);//cout<<b[n]<<endl;
        if(b[n])
            return 0;
    }//cout<<"Y\n";
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
    }//cout<<b[3797]<<b[797]<<b[97]<<b[7];

        llu n;
        cin>>n;
        int c=0;
        llu ans=0;
        for(int i=10;i<n;i++)
        {
            if(fun(i))
            {
                //cout<<i<<" ";
                ans+=i;c++;
            }
            if(c==11)
                break;
        }
        cout<<ans;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

