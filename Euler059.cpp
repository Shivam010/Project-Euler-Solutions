#include <cmath>
#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int check(char c)
{
    if((c<='z' && c>='a') || (c<='Z' && c>='A') || (c<=59 && c>=48) || c=='(' || c==')' || c==',' || c=='.' || c=='?' || c=='-' || c=='!' || c=='\'' || c==' ')
        return 0;   // true
    else
        return 1;   // false
}

int main() {
    int t;
    cin>>t;
    int a[t]={0};
    int xr=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    char key[3]={0};int flag=1;
    for(char i='a';i<'z'+1;i++)
    {
        key[0]=i;
        for(char j='a';j<'z'+1;j++)
        {
            key[1]=j;
            for(char k='a';k<'z'+1;k++)
            {
                flag=2;
                key[2]=k;/*key[0]='a';key[1]='b';key[2]='c';cout<<(char)key[0]<<(char)key[1]<<(char)key[2]<<endl;*/
                for(int i=0;i<t;i++)
                {
                    char w=a[i]^key[i%3];
                    if(check(w))
                    {
                        flag=0;break;
                    }
                }
                if(flag==2)
                    break;
            }
            if(flag==2)
                break;
        }
        if(flag==2)
            break;
    }
    if(flag==2)
        cout<<(char)key[0]<<(char)key[1]<<(char)key[2];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
