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
  vi a(4*n);

  REP(i, 0, 4 * n)  cin >> a[i];
  sort(all(a));

  bool flag = 1;
  int area = a[0] * a.back();

  REP(i, 0, n){
    if((a[2 * i] != a[2 * i + 1]) || (a[4 * n - 1 - (2 * i)] != a[4 * n - 1 - (2 * i) - 1]) || (a[2 * i] * a[4 * n - 1 - (2 * i)] != area)){
      flag = 0;
      break;
    }
  }

  cout << (flag ? "YES\n" : "NO\n");
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
