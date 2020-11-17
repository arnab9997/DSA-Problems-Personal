#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define REP(i, a, n) for(int i=a; i<n; ++i)
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

int main(){
  FAST();
  //Code goes past here:

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vi a(n);
    REP(i, 0, n)  cin >> a[i];

    bool flag = 0;
    int ans = INT_MAX;
    vector<vector<int> > mp(n + 1);
    REP(i, 0, n){
      if(!mp[a[i]].empty()){
        ans = min (ans, i - mp[a[i]].back() + 1);
        flag = 1;
      }
      mp[a[i]].pb(i);
    }

    if(flag)
      cout << ans << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}
