#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int a[20][20];
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
            cin>>a[i][j];
    }
    unsigned long long int x=1;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(i<17 && j<17)
            {
                if(x<(a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]))
                    x=(a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
                if(x<(a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]))
                    x=(a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
                if(x<(a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]))
                    x=(a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
            }
            if(i>2 && j>2)
            {
                if(x<(a[i][j]*a[i][j-1]*a[i][j-2]*a[i][j-3]))
                    x=(a[i][j]*a[i][j-1]*a[i][j-2]*a[i][j-3]);
                if(x<(a[i][j]*a[i-1][j]*a[i-2][j]*a[i-3][j]))
                    x=(a[i][j]*a[i-1][j]*a[i-2][j]*a[i-3][j]);
                if(x<(a[i][j]*a[i-1][j-1]*a[i-2][j-2]*a[i-3][j-3]))
                    x=(a[i][j]*a[i-1][j-1]*a[i-2][j-2]*a[i-3][j-3]);
            }
            if(i<17 && j>2)
            {
                if(x<(a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3]))
                    x=(a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3]);
            }
            if(i>2 && j<17)
            {
                if(x<(a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]))
                    x=(a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]);
            }
        }
    }
    cout<<x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
