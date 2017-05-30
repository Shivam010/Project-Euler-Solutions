#include<iostream>
using namespace std;

long long unsigned int sumfact(int n)
{
    int a=n;
    long long unsigned int sum=0;
    int arr[10];

    arr[0]=1; arr[1]=1; arr[2]=2; arr[3]=6; arr[4]=24; arr[5]=120; arr[6]=720; arr[7]=5040; arr[8]=40320; arr[9]=362880;

    while(a)
    {
        sum=sum+arr[a%10];
        a/=10;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    long int sum=0;
    int a=n;
    while(a>9)
    {
        if(sumfact(a)%a==0)
             sum=sum+a;
        a--;
    }
    cout<<sum;
    return 0;
}
