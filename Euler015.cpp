#include <cmath>
#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Contest: ProjectEuler+
Problem #15: Lattice Path
*/
#define mod 1000000007

void Max(int *a,int *b)
{
    if(*a<*b)
    {
        int t;
        t=*a;
        *a=*b;
        *b=t;
    }
}
typedef unsigned long long int llu;

llu *grid[1002]={0};

int main() {
    int t;
    cin>>t;
    for(int i=0;i<1002;i++)
    {
        grid[i]=(llu *)malloc(sizeof(llu)*(i+1));
        grid[i][0]=grid[i][i]=1;
        grid[i][1]=grid[i][i-1]=i;
        //cout<<grid[i][0]<<" ";
        if(i>0)
        {
           for(int j=1;j<i;j++)
           {
               grid[i][j]=(grid[i-1][j]+grid[i-1][j-1])%mod;
               //cout<<grid[i][j]<<" ";
           }
        }
        //cout<<grid[i][i]<<"\n";
    }
    while(t--)
        {
        int a,b;
        cin>>a>>b;
        cout<<grid[a+b][b]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
