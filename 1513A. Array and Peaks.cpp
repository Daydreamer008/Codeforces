#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
#define cendl cout<<endl
 
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
 
#define pii pair<int,int>
#define pll pair<long long, long long>
 
#define mod 1000000007
#define inf 1000000000000000001;
 
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define asc(c) c.begin(),c.end()
#define des(c) c.begin(),c.end(),greater<int>()

#define sumOf(c) accumulate(c.begin(),c.end(),0)
#define maxOf(c) *max_element(c.begin(),c.end())
#define minOf(c) *min_element(c.begin(),c.end())

#define pb push_back
 
#define eb emplace_back
#define f first
#define s second

 
void solve() {
        int n,k;
        cin>>n>>k;
        vector<int> ans(n+1);
        int num=n;
        for(int i=2;i<n;i+=2) {
            if(k==0)
                break;
            ans[i]=num--;
            k--;
        }
        if(k) {
            cout<<-1<<endl;
            return;
        }
        int cur=1;
        for(int i=1;i<=n;i++) {
            if(!ans[i])
            ans[i]=cur++;
        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    cin>>t;

    for(ll tc = 1 ; tc <=t ; ++tc) {    
        solve();
    }
    fflush(stdout);
    return 0;
}