#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
ProjectEuler+
Problem = #17: Number to Words
*/

typedef long long int lli;

int digit(lli n)
{
    int d=0;
    while(n)
    {
        d++;
        n/=10;
    }
    return d;
}

void if19 (lli n)
{
    if(n==1)
        cout<<"One ";
    else if(n==2)
        cout<<"Two ";
    else if(n==3)
        cout<<"Three ";
    else if(n==4)
        cout<<"Four ";
    else if(n==5)
        cout<<"Five ";
    else if(n==6)
        cout<<"Six ";
    else if(n==7)
        cout<<"Seven ";
    else if(n==8)
        cout<<"Eight ";
    else if(n==9)
        cout<<"Nine ";
    else if(n==10)
        cout<<"Ten ";
    else if(n==11)
        cout<<"Eleven ";
    else if(n==12)
        cout<<"Twelve ";
    else if(n==13)
        cout<<"Thirteen ";
    else if(n==14)
        cout<<"Fourteen ";
    else if(n==15)
        cout<<"Fifteen ";
    else if(n==16)
        cout<<"Sixteen ";
    else if(n==17)
        cout<<"Seventeen ";
    else if(n==18)
        cout<<"Eighteen ";
    else if(n==19)
        cout<<"Nineteen ";
}
void iftens(lli n)
{
    if(n==10)
        cout<<"Ten ";
    else if(n==20)
        cout<<"Twenty ";
    else if(n==30)
        cout<<"Thirty ";
    else if(n==40)
        cout<<"Forty ";
    else if(n==50)
        cout<<"Fifty ";
    else if(n==60)
        cout<<"Sixty ";
    else if(n==70)
        cout<<"Seventy ";
    else if(n==80)
        cout<<"Eighty ";
    else if(n==90)
        cout<<"Ninety ";
}
void elseinwords(lli n)    // 123456      123
{
    int d=digit(n);
    if(d<=3)            // 315
    {
        if(n<20)
            if19(n);
        else if(n%10==0 && n<100)
            iftens(n);
        else
        {
            if(n/100)
            {
                if19(n/100);
                cout<<"Hundred ";
            }
            if(n%100<20)
            {
                if19(n%100);
            }
            else
            {
                iftens((n%100)-(n%10));
                if(n%10)
                    if19(n%10);
            }
        }
    }
    else if(d<=6)           // 789456
    {
        elseinwords(n/1000);
        cout<<"Thousand ";
        elseinwords(n%1000);
    }
    else if(d<=9)          // 123456789
    {
        elseinwords(n/1000000);
        cout<<"Million ";
        elseinwords(n%1000000);
    }
    else                  // 123456789123 0
    {
        elseinwords(n/1000000000);
        cout<<"Billion ";
        elseinwords(n%1000000000);
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        if(n==0)
            cout<<"Zero ";
        else
        {
            if(n<20)
                if19(n);
            else if(n%10==0 && n<100)
                iftens(n);
            else
            {
                elseinwords(n);
            }
        }
        cout<<endl;
    }
    return 0;
}
