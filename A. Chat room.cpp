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
 
#define eb emplace_back
#define f first
#define s second

void solve() {
	string s;
	cin>>s;
	string temp = "hello";
	int j =0 , c =0;
	for(int i =0 ; i <s.length() ; ++i) {
		if(s[i] == temp[j]) {
			c++;
			j++;
			if(c == 5) {
				break;
			}
		}
	}
	if(c == 5) {
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
}
 
 
int main() {
	// cin.ignore(); must be there when using getline(cin, s)
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}