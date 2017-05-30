#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        n--; // bellow n
        ll sum=0,last;
        last = (n/3)*3;
        sum += ((n/3)*(last+3))/2;
        last = (n/5)*5;
        sum += ((n/5)*(last+5))/2;
        last = (n/15)*15;
        sum -= ((n/15)*(last+15))/2;
        cout<<sum<<endl;
    }
    return 0;
}
