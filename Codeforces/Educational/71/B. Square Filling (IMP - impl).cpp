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
  int n, m;
  cin >> n >> m;
  vector<vector<int> > a(n, vector<int>(m, 0));
  REP(i, 0, n)  REP(j, 0, m)  cin >> a[i][j];

  vii abc;

  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < m - 1; j++){
      if(a[i][j] * a[i + 1][j] * a[i][j + 1] * a[i + 1][j + 1] > 0){
        a[i][j] = 2;
        a[i + 1][j] = 2;
        a[i][j + 1] = 2;
        a[i + 1][j + 1] = 2;
        abc.pb({i + 1, j + 1});
      }
    }
  }

  int cnt = 0;
  REP(i, 0, n){
    REP(j, 0, m){
      if(a[i][j] == 1)
        cnt++;
    }
  }
  if(cnt != 0)
    cout << -1 << endl;

  else{
    cout << abc.size() << endl;
    for(auto x : abc)
      cout << x.first << " " << x.second << endl;
  }
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
