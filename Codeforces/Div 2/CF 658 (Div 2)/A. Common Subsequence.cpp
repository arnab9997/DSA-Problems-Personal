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

void solve(){
  int n, m;
  cin >> n >> m;
  vi a(n), b(m), c;
  REP(i, 0, n)  cin >> a[i];
  REP(i, 0, m)  cin >> b[i];

  REP(i, 0, n){
    REP(j, 0, m){
      if(a[i] == b[j]){
        cout << "YES\n";
        cout << 1 << " " << a[i] << endl;
        return;
      }
    }
  }
  cout << "NO\n";
}

int main(){
  FAST();
  //Code goes past here:

  int t = 1;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
