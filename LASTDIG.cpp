//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll binpow(ll a, ll b, ll m) {
    a %= m;
   ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int  main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<binpow(a,b,10)<<endl;
    }
    return 0;
}
