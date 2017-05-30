#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100005]={0};
        long long int n,d,m=0;
        cin>>n;
        d=n;
        if(n==0){
            cout<<"1\n";
            continue;
        }
        while(d)
        {
            a[m]=d%10;
            d/=10;
            m++;
        }
        d=n-1;
        long long unsigned int x,carry=0;
        while(d>1)
        {
            long long int i;
            for(i=0;i<m;i++)
            {
                x=carry+a[i]*d;
                a[i]=x%10;
                carry=x/10;
            }
            while(carry!=0)
            {
                m++;
                a[i++]=carry%10;
                carry=carry/10;
            }
            d--;
        }
        long long int sum=0;
        for(long long int j=m-1;j>=0;j--)
            sum=sum+a[j];
        cout<<sum<<endl;
    }
    return 0;
}
