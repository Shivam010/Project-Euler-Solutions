#include<iostream>
using namespace std;

int main()
{
	// There exists exactly one Pythagorean triplet for which a + b + c = n.
	// Find the product abc.
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,y=0;
        int n;
        cin>>n;
        long long N=n*n;
        long long int x=-1;
        for(int a=1;a<=n/2;a++){
            b=(N-2*n*a)/(2*n-2*a);
            c=n-a-b;
            if(b==0 || c==0)
                continue;
            if(!(a*a+b*b-c*c)){
                y=a*b*c;
                if(x<y)
                    x=y;
            }
        }
        cout<<x<<endl;
    }
	return 0;
}
