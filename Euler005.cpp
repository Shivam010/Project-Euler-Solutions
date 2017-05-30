#include <iostream>
using namespace std;
long long int hcf(long long int ,long long int );
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int i;
        long long int m;
        m=1;
        for(i=1;i<=n;i++){
            m=m*i/hcf(m,i);
        }
        cout<<m<<endl;
    }
    return 0;
}
long long int hcf(long long int a,long long int b)
{
    if(b==0)
        return (a);
    else{
        return(hcf(b,a%b));
    }
}
