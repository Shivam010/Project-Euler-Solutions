#include <cmath>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        char d[100000]={0};d[0]=2;
        unsigned long long int sum=0,i=0,j,carry=0;
        d[0]='2';
        
        while(i<(n-1))
        {
            carry=0;
            for(j=0;d[j]!=0;)
            {
                unsigned long long int x=(carry+(d[j]-48)*2);
                d[j]=x%10+48;
                carry=x/10;
                j++;
            }
            while(carry!=0)
            {
                unsigned long long int x=(carry);
                d[j]=x%10+48;
                carry=x/10;
                j++;
            }
            i++;
        }//cout<<strlen(d)<<endl;
        for(int k=0;d[k]!=0;k++)
        {
            //cout<<d[k];
            sum+=d[k]-48;
        }
        cout<<sum<<endl;;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
