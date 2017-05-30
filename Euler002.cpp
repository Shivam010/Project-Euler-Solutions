#include<bits/stdc++.h>
using namespace std;
// Even Fibonacci numbers
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        unsigned long long int n;
		cin>>n;
		unsigned long long int b=1,a=1;
		unsigned long long int c=1,d=0,i=1;
		while(c<n){
				if(!(c&1)){
					d=d+c;
				}
				c=a+b;
				a=b;
				b=c;
		}
		cout<<d<<endl;
	}
    return 0;
}
