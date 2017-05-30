#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    char *a[N];
    for(int i=0;i<N;i++)
    {
        char n[15];
        scanf("%s",n);
        a[i]=(char*)malloc(strlen(n)+1);
        strcpy(a[i],n);
    }

    for(int i=0;i<N-1;i++)
    {
        char *m;
        m=a[i];int p=i;
        for(int j=i;j<N;j++)
        {
            if(strcmp(m,a[j])>0)
            {
                m=a[j];
                p=j;
            }
        }
        if(p!=i)
        {
            char *t;t=a[i];
            a[i]=m;
            a[p]=t;
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        char nm[15]={0};
        int ii;
        scanf("%s",nm);
        for(int i=0;i<N;i++)
        {
            if(strcmp(nm,a[i])==0)
            {
                ii=i;
                break;
            }
        }
        int sum=0;
        for(int i=0;i<strlen(nm);i++)
            sum=sum+nm[i]-64;
        cout<<sum*(ii+1)<<endl;
    }
    return 0;
}
