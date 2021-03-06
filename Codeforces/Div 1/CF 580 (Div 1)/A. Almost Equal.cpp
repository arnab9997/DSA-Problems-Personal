#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
//#define REP(i, a, n) for(int i=a; i<n; ++i)
#define REP(i, st, en) for(__typeof(en) i=(st)-(st>en); i!=(en)-(st>en); i+=1-2*(st>en))
#define pb push_back
#define sz(x) (int)((x).size())
#define all(x) (x).begin(), (x).end()

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const double PI = 3.141592653589793238460;
const ll mod = 1e9+7;

void FAST(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

bool comp(const pair<int, int> &a, const pair<int, int> &b){
  return (a.first > b.second);
}

void solve(){
  ll n;
  cin >> n;

  if(n % 2 == 0){
    cout << "NO\n";
    return;
  }
  vector<ll> left, right;
  left.pb(1);
  ll k = 2;
  for(ll i = 1; i < n; i++){
    if(i % 2 == 1){
      right.pb(k++);
      right.pb(k++);
    }
    else{
      left.pb(k++);
      left.pb(k++);
    }
  }
  right.pb(2 * n);
  cout << "YES\n";
  for(auto x : left)  cout << x << " ";
  for(auto x : right) cout << x << " ";
  cout << endl;
}

int main(){
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
  FAST();
  //Code goes past here:

  int t = 1;
  //cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
