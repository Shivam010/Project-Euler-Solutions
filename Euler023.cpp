#include <iostream>
#include <stdio.h>
using namespace std;
#define mod 1000000007
typedef unsigned long long int llu;

int fact(int n)
{
    int i=2;
    llu ans=1;
    while(i*i<=n)
    {
        if(n%i==0){
            ans+=i;
            if(i!=(n/i))
                ans+=(n/i);
        }
        if(ans>n){
            //cout<<n<<" "<<ans<<endl;
            return 1;
        }
        i++;
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
	int l,i=1;
	cin>>l;
	int ab[100000]={0};
	int c=0,flag=0;
	while(i<=l){
        if(fact(i)){
            ab[c]=i;
            for(int j=0;j<=c;j++){
                int x=ab[j]+ab[c];//cout<<x<<endl;
                if(x==l)
                {
                    cout<<"YES\n";flag=1;break;
                }
            }
            if(flag==1)
                break;
            c++;
        }
        i++;
	}
	if(flag==0)
        cout<<"NO\n";
    }
    return 0;
}

/*
28123
363934125 395465626
31531501
*/
