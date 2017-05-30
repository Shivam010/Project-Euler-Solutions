#include <cmath>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    char a[n][50],sum[60]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=49;j>=0;j--)
        {
            cin>>a[i][j];
            a[i][j]-=48;
        }
    }
    int k=0,carry=0;
    for(int i=0;i<50 && k<n;)
    {
        int x=(sum[i]+a[k][i]+carry);
        sum[i]=x%10;
        carry=x/10;
        i++;
        if(i==50)
        {
            int j=50;
            while(carry!=0)
            {
                int x=(sum[j]+carry);
                sum[j]=x%10;
                carry=x/10;
                j++;
            }
            i=0;
            k++;
        }
    }
    int p=59;
    while(sum[p]==0)
        p--;
    for(int i=p;i>p-10;i--)
        cout<<int(sum[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
