#include <cmath>
#include <cstdio>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int llu;
// 125875 2

void digit(int n,char* A)
{
    int m=n;
    while(m)
    {
        A[m%10]++;
        m/=10;
    }
}

int main() {
    llu n,k;
    cin>>n>>k;

    for(llu i=125874;i<=n;i++)
    {
        char a[11]={"0000000000"};
        digit(i,a);
        int flag=1;
        for(llu j=2;j<=k;j++)
        {
            char b[11]={"0000000000"};
            digit(i*j,b);
            //printf("%s %s\n",a,b);
            if(strcmp(a,b)!=0)
            {
                flag=0;break;
            }
        }
        if(flag==1)
        {
            cout<<i;
            for(llu q=2;q<=k;q++)
                cout<<" "<<i*q;
            cout<<endl;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
