#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;

typedef long long int lli;

int main()
{
    int qq;
    cin>>qq;
    while(qq--){
        int t;
        cin>>t;
        int *n[t];//=(int *)malloc(sizeof(int)*(120));
        int i=0;
        while(i<t){
            n[i]=(int *)malloc(sizeof(int)*(i+1));
            for(int j=0;j<=i;j++){
                int a;
                cin>>a;
                n[i][j]=a;
            }
            i++;
        }
        i=t-1;
        //long long int sum=n[0][0],Max=0;
        int j=0;
        while(i>=0)
        {
            for(j=0;j<i;j++)
            {
                if(n[i][j]>n[i][j+1])
                    n[i-1][j]+=n[i][j];
                else
                    n[i-1][j]+=n[i][j+1];
                //cout<<n[i][j]<<" ";
            }//cout<<endl;
            i--;
        }
        cout<<n[0][0]<<endl;
    }
    return 0;
}
