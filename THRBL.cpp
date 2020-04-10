//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define bit_cnt(mask) __builtin_popcountll(mask)
#define ll long long int
#define dst(u,v,x,y) sqrt((x*1.0-u*1.0)*(x*1.0-u*1.0)+(y*1.0-v*1.0)*(y*1.0-v*1.0))
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
template <class T> inline T bpow(T p,T e){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p);p = (p * p);}return (T)ret;}
using namespace std;
const int MOD = (int)1e9+7;
ll st[50000][25];
ll temp[50001];
ll arr[50000];
void solve()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
      cin>>arr[i];
      st[i][0]=arr[i];
    }
    temp[1]=0;
    for(ll i=2;i<=50001;i++)temp[i]=temp[i/2]+1;
    for(ll j=1;j<=25;j++)
    {
      for(ll i=0;i+(1<<j)<=n;i++)
      {
        st[i][j]=max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
      }
    }
    ll L,R;
    ll ans=0;
    for(ll i=0;i<m;i++)
    {
      cin>>L>>R;
      L--;
      R--;
      if(L<R){
      ll j=temp[(R-1)-L+1];
      ll maximum=max(st[L][j],st[(R-1)-(1<<j)+1][j]);
      if(maximum<=arr[L])ans++;
      }
      else{
        ll j=temp[L-(R+1)+1];
      ll maximum=max(st[R+1][j],st[L-(1<<j)+1][j]);
      if(maximum<=arr[L])ans++;
      }
    }
    cout<<ans<<endl;
}
int  main()
{
    IOS
    solve();
    return 0;
}

