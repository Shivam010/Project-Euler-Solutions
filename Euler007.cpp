#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

        int i=4,a[200007]={0};
        a[0]=1;a[1]=1;
        while(i<200007)
        {
            a[i]=1;
            i+=2;
        }
        int j;
        for(i=3;i<200007;i+=2)
        {
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    a[i]=1;
                    break;
                }
            }
        }

    while(t--)
    {
        int n;
        cin>>n;
        int k,c=0;
        for(k=0;k<200007;k++)
        {
            if(a[k]==0)
            {
                c++;
                if(c==n)
                    break;
            }
        }
        cout<<k<<endl;
    }

    return 0;
}
