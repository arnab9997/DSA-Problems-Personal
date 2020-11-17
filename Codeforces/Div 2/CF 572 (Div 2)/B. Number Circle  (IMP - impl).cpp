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

////////////////////////////////////////////////////////////////
// Following is a possible solution:
//a[n−2], a[n], a[n−1], a[n−4], a[n−5],....…, a[1]  -> 1 indexed representation
////////////////////////////////////////////////////////////////

void solve(){
  int n;
  cin >> n;
  vector<ll> a(n), x(n);
  REP(i, 0, n)  cin >> a[i];
  sort(all(a));

  int t1 = 0, t2 = n - 1;
  REP(i, 0, n){
    if(i % 2 == 0)
      x[t1++] = a[i];
    else
      x[t2--] = a[i];
  }
  x.pb(x[0]);
  x.pb(x[1]);

  bool flag = 1;
  for(int i = 1; i < n + 1; i++){
    if(x[i] >= x[i - 1] + x[i + 1]){
      flag = 0;
      break;
    }
  }

  if(flag){
    cout << "YES\n";
    REP(i, 0, n)
      cout << x[i] << " ";
    cout << endl;
  }
  else
    cout << "NO\n";
}

int main(){
  FAST();
  //Code goes past here:

  int t = 1;
  //cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
