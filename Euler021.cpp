/***
Author: ShivamRathore (Shivam010)
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    ll a[100011]={0};
    for(int i=2;i<100011;i++){
        int x=i;
        a[i]=1;
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                a[i]+=j;
                if(x/j!=j)
                    a[i]+=(x/j);
            }
        }
    }
   while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        for(int i=1;i<n;i++){
            if(a[i]>100000) continue;
            if(a[a[i]]==i && i!=a[i]){
                sum+=i;
            }
        }
       cout<<sum<<endl;
    }
    return 0;
}
