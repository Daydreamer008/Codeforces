#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
 
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
#define all(c) c.begin(),c.end()
 
#define eb emplace_back
#define f first
#define s second
 
void solve() {
	ll t;
	cin>>t;
	while(t--) {
		ll windows;
		cin>>windows;
		if(windows == 1 || windows == 2 || windows == 4) {
			cout<<"-1\n";
		}
		else {
			if(windows%3 == 0) {
				cout<<windows/3<<" 0"<<" 0\n";
			}
			else if(windows%3 == 1) {
				cout<<(windows-7)/3<<" 0"<<" 1\n";
			}
			else {
				cout<<(windows -5)/3<<" 1"<<" 0\n";
			}
		}
	}
}
 
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}