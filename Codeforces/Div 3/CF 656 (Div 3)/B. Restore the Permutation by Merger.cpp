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
  int n;
  cin >> n;
  vi arr(2 * n), sol, mp(51, 0);
  REP(i, 0, 2 * n)  cin >> arr[i];
  REP(i, 0, 2 * n){
    if(mp[arr[i]] == 0){
      mp[arr[i]] = 1;
      sol.pb(arr[i]);
    }
  }
  for(int x : sol)
    cout << x << " ";
  cout << endl;
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
