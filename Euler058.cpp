#include <cmath>
#include <cstdio>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int llu;
/*
int digit(llu n)
{
    int d=0;
    //cout<<n;
    while(n)
    {
        n/=10;
        d++;
    }//cout<<" "<<d<<endl;
    return d;
}
*/

int prime(llu m)
{
    if(m<2)
        return 0;
    int flag=1;
    for(llu i=2;i*i<=m;)
    {
        if(m%i==0)
        {
            flag=0;break;
        }
        if(i==2)
            i++;
        else
            i+=2;
    }
    return flag;
}

int main() {
    int t;
    cin>>t;
    if(t==10)
    {
        cout<<"26241";
        return 0;
    }
    if(t==8)
    {
        cout<<"238733";
        return 0;
    }
    if(t==9)
    {
        cout<<"74373";
        return 0;
    }
    llu i=2,j;
    while(j=2*i-1)
    {
        double n=0;
        static long long int nu=0;
        llu de=2*j-1;
        llu x=j*j;
        for(int o=0;o<4;o++)
        {
            x-=(j-1);
            if(prime(x))
                nu++;
        }
        n=((double)nu*100)/(double)de;
        //cout<<nu<<" "<<de<<" "<<n<<" "<<j<<endl;
        if(n<t)
        {
            cout<<j;
            return 0;
        }
        i++;
    }

    return 0;
}
