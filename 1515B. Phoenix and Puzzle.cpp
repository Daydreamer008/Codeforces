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

bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

void solve(){
  int n;
  cin>>n;
  if (n%2==0 && isSquare(n/2))
    cout<<"YES"<<endl;
  else if (n%4==0 && isSquare(n/4))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // cin.ignore(); must be there when using getline(cin, s)
    
    ll t = 1;
    cin>>t;
    for(ll tc = 1 ; tc <=t ; ++tc) {    
        solve();
    }
    fflush(stdout);
    return 0;
}