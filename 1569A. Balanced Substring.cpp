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
#define inf 1000000000000000001
 
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n == 1) {
        cout<<"-1 -1\n";
        return;
    }
    int count_a , count_b;
    for(int i =0; i <n-1 ; ++i) {
        count_a =0 , count_b = 0;
        if(s[i] == 'a') {
            ++count_a;
        }
        else {
            ++count_b;
        }
        for(int j = i+1 ; j<n ; ++j) {
            if(s[j] == 'a') {
                ++count_a;
            }
            else {
                ++count_b;
            }
            if(count_a == count_b) {
                cout<<i+1<<" "<<j+1<<"\n";
                return;
            }
        }
    }
    cout<<"-1 -1\n";
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