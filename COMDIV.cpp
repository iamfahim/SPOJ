//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll             long long int
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
const int MOD = (int)1e9+7;
int divcount(int num)
{
    int cnt=0;
    for(int i=1;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            if(num/i==i)cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}
int  main()
{
    //IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int comdiv=__gcd(a,b);
        comdiv=divcount(comdiv);
        printf("%d\n",comdiv);
    }
    return 0;
}
