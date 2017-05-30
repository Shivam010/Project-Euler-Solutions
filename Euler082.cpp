/***
Problem >> Path sum: three ways Project Euler #82
Code By >> ShivamRathore (Shivam010)
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mini(ll a,ll b){
    if(a<=b)
        return a;
    return b;
}

int main(){
    int n;
    cin>>n;
    ll a[n][n],b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    if(n==1){
        cout<<a[0][0];
        return 0;
    }
    if(n==2){
        ll ans=0;
        ans = mini(a[0][0]+a[0][1],a[1][0]+a[1][1]);
        cout<<ans<<endl;
        return 0;
    }
    for(int j=n-2;j>0;j--){
        for(int i=0;i<n;i++){
            ll x = a[i][j]+b[i][j+1];
            ll s = a[i][j];
            for(int k=i-1;k>=0;k--){
                if(s >= x)
                    break;
                x = mini(x,s+b[k][j]);
                s+=a[k][j];
            }
            s = a[i][j];
            for(int k=i+1; k<n;k++){
                s+=a[k][j];
                if(s >= x)
                    break;
                x = mini(x,s+b[k][j+1]);
            }
            b[i][j]=x;
        }
    }

    ll ans = LONG_LONG_MAX;
    for(int i=0;i<n;i++){
        b[i][0]=a[i][0]+b[i][1];
        ans = mini(b[i][0],ans);
    }
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    */
    cout<<ans<<endl;
    return 0;
}
/***
4
3 1 6 20
1 4 8 7
2 3 10 6
0 18 11 16
>>20
***/
