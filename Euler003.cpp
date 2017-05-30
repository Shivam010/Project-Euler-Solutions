#include<bits/stdc++.h>
using namespace std;

int main()
{
	// largest prime factor of 600851475143

	int t;
	cin>>t;
	while(t--)
	{
	    unsigned long long int a;
		cin>>a;
		unsigned long long int i=3,L=a,j;
		while(!(a&1))
        {
            L=2;
            a/=2;
        }
		while(i*i<=a)
		{
            int f=1;
			if(a%i==0)
			{
                L=i;
				a=a/i;
			}
			if(a%i==0)
                i=i;
			else
			i+=2;
		}
		if(a>2)
            L=a;
		cout<<L<<endl;
	}
	return 0;
}
