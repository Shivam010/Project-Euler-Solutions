#include<bits/stdc++.h>
using namespace std;

int pal(long int n)
{
    long int a=n;
    long int p=0;
    while(a)
    {
        p=p*10+a%10;
        a/=10;
    }
    if(p==n)
        return (1);
    else
        return(0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int l=0;
        long int N;
        cin>>N;
        int a=100,b;
        for(a=100;a<1000;a++)
        {
            for(b=a;b<1000;b++)
            {
                if(pal(a*b)==1 && a*b <N)
                {
                    if(l<a*b)
                    {
                        l=a*b;
                    }
                }
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
