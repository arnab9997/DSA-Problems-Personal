/*C*/
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
  int n;
  cin >> n;
  vi mpa(n + 1, 0), mpb(n + 1, 0), cnt(n + 1, 0);

  REP(i, 1, n + 1){
    int a;
    cin >> a;
    mpa[a] = i;
  }
  REP(i, 1, n + 1){
    int b;
    cin >> b;
    mpb[b] = i;
  }

  REP(i, 1, n + 1){
    int diff = mpa[i] - mpb[i];
    if(diff < 0)
      diff += n;
    cnt[diff]++;
  }

  int ans = 1;
  REP(i, 1, n + 1)
    ans = max (ans, cnt[i]);

  cout << ans << endl;
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
