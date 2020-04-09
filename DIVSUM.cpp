//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;
const int MOD = (int)1e9+7;
int divsum(int n)
{
    int sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if((n/i)==i)
            {
                sum+=i;
            }
            else
            {
                sum+=(n/i);
                sum+=i;
            }
        }
    }
    return sum;
}
int  main()
{
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<divsum(n)<<endl;

    }
    return 0;
}
