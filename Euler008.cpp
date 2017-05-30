#include <iostream>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,n,k;
        scanf("%d%d",&n,&k);
        char a[n];
        scanf("%s",a);

        for(p=0;p<n;p++)
            a[p]-=48;

        int x=n-k+1;
        int i,j,c;
        int ans=0;
        for(i=0;i<=(n-k);i++)
        {

            j=i;c=1;
            while(j<i+k)
            {
                c=c*a[j];
                j++;
            }
            if(ans<c)
                ans=c;
        }
        printf("%d\n",ans);

    }
    return 0;
}
