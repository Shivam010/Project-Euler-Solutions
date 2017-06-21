/***
Author: ShivamRathore (Shivam010)
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mk make_pair
#define F first
#define S second

struct date{
    ll d,m,y;
};

bool cmp(date a,date b){
    if(a.y<b.y) return 1;
    if(a.y>b.y) return 0;
    if(a.m<b.m) return 1;
    if(a.m>b.m) return 0;
    return (a.d<=b.d);
}

bool isleap(date a){
    if(a.y%4==0 && a.y%100!=0) return 1;
    return (a.y%400==0);
}

int nodate(date a){
    if(a.m==2){
        if(isleap(a)) return 29;
        return 28;
    }
    if(a.m==4 || a.m==6 || a.m==9 || a.m==11) return 30;
    return 31;
}


int main()
{
    int Mon[13]={0,1,-2,1,0,1,0,1,1,0,1,0,1};
    int mon[13]={0,1,-2,1,0,1,0,1,1,0,1,0,1};
    for(int i=1;i<13;i++)
        mon[i]+=mon[i-1];
    int t;
    cin>>t;
    while(t--)
    {
        date a,b;
        cin>>a.y>>a.m>>a.d;
        cin>>b.y>>b.m>>b.d;
        if(a.d!=1){
            a.m++;
            a.d=1;
            if(a.m==13){
                a.m=1;
                a.y++;
            }
        }
        if(b.d!=1)
            b.d==1;
        ll ans=0;

        ll day=0,leap=isleap(a);
        day=(a.y-1900)%7;
        ll d4,d400,d100;
        d4=(a.y+4-1900)/4;
        d400=(a.y+400-2000)/400;
        d100=(a.y+100-1900)/100;
        day=(day+d4+d400-d100)%7;
        if(leap && a.m<=2)
            day=(day+6)%7;
        day=(day+30*(a.m-1)+mon[a.m-1])%7;
        day=(day+a.d+6)%7;
        day=(day+1)%7;
        int add=0;
//        cout<<day<<endl;
//        continue;
        //cout<<" "<<a.d<<" "<<a.m<<" "<<a.y<<" "<<day<<endl;
        while(cmp(a,b)){
            if(day==0){
                //cout<<a.d<<" "<<a.m<<" "<<a.y<<endl;
                ans++;
            }
            a.m++;
            if(a.m==13){
                a.m=1;
                add=1;
                a.y++;
                leap=isleap(a);
            }
            if(a.m==1) day+=add;
            day=(day+37+Mon[a.m-1])%7;
            //cout<<Mon[a.m-1]<<" = ";
            if(a.m==3) day=(day+leap)%7;
            //cout<<day<<"  "<<a.d<<" "<<a.m<<" "<<a.y<<" -"<<leap<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
