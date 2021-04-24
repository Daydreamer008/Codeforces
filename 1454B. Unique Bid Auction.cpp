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
    ll n;
    cin>>n;
    vll a(n+1);
    unordered_map<int , int> unmp;
    for(int i =1 ; i <=n  ;++i) {
        cin>>a[i];
        unmp[a[i]]++;
    }
    ll ans = INT_MAX;
    for(auto it : unmp) {
        if(it.s == 1 && it.f < ans) {
            ans = it.f;
        }
    }
    if(ans == INT_MAX) {
        cout<<"-1\n";
    }
    else {
        for (int i = 1; i <= n; ++i) {
            if(ans == a[i]) {
                cout<<i<<"\n";
                break;
            }
        }
    }
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