#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;

typedef long long int lli;

bool prime[2000001]={false};

int main()
{
    int t;
    cin>>t;
    prime[0]=prime[1]=true;
    for(int i=4;i<2000001;i+=2)
        prime[i]=true;
    for(int i=3;i*i<=2000001;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<2000001;j+=2*i)
                prime[j]=true;
        }
    }
    while(t--)
    {
        int n;
        cin>>n;
        lli sum=5;
        if(n<=1)
            cout<<"0\n";
        else if(n==2)
            cout<<"2\n";
        else if(n<5)
            cout<<"5\n";
        else
        {
            for(int i=5;i<=n;)
            {
                if(!prime[i])
                    sum+=i;
                i+=2;
                if(i<=n && !prime[i])
                    sum+=i;
                i+=4;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
