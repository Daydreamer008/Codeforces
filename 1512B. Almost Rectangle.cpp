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
    char a[n][n];
    vector<int> vp;
    for(int i =0 ;  i<n ; ++i) {
        for(int j =0 ; j<n ; ++j) {
            cin>>a[i][j];
            if(a[i][j] == '*') {
                vp.eb(i);
                vp.eb(j);
            }
        }
    }
    int x1 = vp[0] , y1 = vp[1] , x2 = vp[2] , y2 = vp[3];
    if(x1 == x2) {
        if(x1 != n-1) {
            a[x1+1][y1] = '*';
            a[x2+1][y2] = '*';
        }
        else {
            a[x1-1][y1] = '*';
            a[x2-1][y2] = '*';
        }
    }
    else if(y1 == y2) {
        if(y1 != n-1) {
            a[x1][y1+1] = '*';
            a[x2][y2+1] = '*';
        }
        else {
            a[x1][y1-1] = '*';
            a[x2][y2-1] = '*';
        }
    }
    else {
        a[x1][y2] = '*';
        a[x2][y1] = '*';
    }
    for(int i =0 ;  i<n ; ++i) {
        for(int j =0 ; j<n ; ++j) {
            cout<<a[i][j];
        }
        cout<<"\n";
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