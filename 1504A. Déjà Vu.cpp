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
    string s;
    cin>>s;
    string str = "a" + s;
    string str2 = s + "a";
    string checkstr1 = str;
    string checkstr2 = str2;
    reverse(str.begin(), str.end());
    reverse(str2.begin(), str2.end());
    if(checkstr2.compare(str2) != 0) {
        cout<<"YES\n"<<checkstr2<<"\n";
    }
    else if(checkstr1.compare(str) != 0) {
        cout<<"YES\n"<<checkstr1<<"\n";
    }
    else {
        cout<<"NO\n";
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