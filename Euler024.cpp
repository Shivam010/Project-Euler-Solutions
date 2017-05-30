#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
ProjectEuler+
Problem = #24: Lexicographic permutations
*/

typedef long long int lli;

lli Fa[14]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n,m;
        cin>>n;
        m=n;
        char base[14]="abcdefghijklm";
        char a[14]={0};
        for(int i=0;i<13;i++)
        {
            int j=0,flag=0,p;
            for(j=0;j<13;j++)
            {
                if(n>(j*Fa[12-i]))
                {
                    flag=1;
                    a[i]=base[j];p=j;
                    m=n-(j*Fa[12-i]);
                }
                else if(flag==1)
                    break;
            }
            n=m;
            for(int x=p;x<12;x++)
                base[x]=base[x+1];
        }
        for(int x=0;x<13;x++)
            cout<<a[x];
        cout<<endl;
    }
    return 0;
}
