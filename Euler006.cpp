#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n,sq1,s2;
    cin>>t;
    while(t--){
        cin>>n;
        sq1=n*(n+1)*(2*n+1)/6;
        s2=n*(n+1)*n*(n+1)/4;
        cout<<s2-sq1<<endl;
    }
    return 0;
}
