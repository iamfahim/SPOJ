//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
#define ll long long int
using namespace std;

int  main()
{
    // IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","wt",stdout);
    int n;
    while(scanf("%d",&n)!=EOF){
    int arr[3000][4];
    int aa,bb,cc,dd;
    vector<int>st,st2;
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            st.push_back(arr[i][0]+arr[j][1]);
        }
    }
    sort(st.begin(),st.end());
    int ans=0;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            ll val=(-1)*(arr[i][2]+arr[j][3]);
            std::pair<std::vector<int>::iterator,std::vector<int>::iterator> bounds;
            bounds=std::equal_range (st.begin(), st.end(), val);
            ans+= (bounds.second - st.begin())-(bounds.first - st.begin());
        }
    }
    printf("%d\n",ans);
    }
    return 0;
}
