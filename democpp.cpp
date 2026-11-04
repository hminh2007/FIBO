#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int f[100005];
int n,x;
void fibo()
{
     f[1]=0;
     f[2]=1;
     for(ll i=3;i<=n;i++)
     {
        f[i]=f[i-1]+f[i-2];
     }
}
int main() 
{
    cin>>n;
    fibo();
    cout<<f[n];
}
