#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int lli;

lli powe(lli a,lli b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    lli ans=powe(a,b/2);
    if(b&1)
        return ans*ans*a;
    else
        return ans*ans;
}

int digit(lli a){
    int ans=0;
    while(a){
        ans++;
        a/=10;
    }
    return ans;
}

int main() {
    lli t,ans=0;
    cin>>t;
    while(ans<=9){
        lli x=powe(ans,t);
        int d=digit(x);
        if(d==t)
            cout<<x<<endl;
        else if(d>x)
            break;
        ans++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
