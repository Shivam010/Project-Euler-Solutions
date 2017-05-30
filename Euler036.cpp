#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool palin(int n){
    int m=n,rn=0;
    while(m){
        rn=rn*10+m%10;
        m/=10;
    }
    if(n==rn)
        return 1;
    return 0;
}

bool base(int n,int k){
    string ans="";
    while(n){
        ans.push_back(n%k + 48);
        n/=k;
    }
    n=ans.size();
    for(int i=0;i<n/2;i++){
        if(ans[i]!=ans[n-i-1])
            return 0;
    }
    return 1;
}

int main() {
    int t,k;
    cin>>t>>k;
    long long sum=0;
    for(int i=1;i<=t;i++){
        if(palin(i)){
            if(base(i,k)){
                sum+=i;
            }
        }
    }
    cout<<sum<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
