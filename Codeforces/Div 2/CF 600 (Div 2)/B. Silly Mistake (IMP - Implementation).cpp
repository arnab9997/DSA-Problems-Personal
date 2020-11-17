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
  vi a(n), ans, curr;
  REP(i, 0, n)  cin >> a[i];

  int mp[1000001] = {0};
  int cnt = 0;


  for(int i = 0; i < n; i++){
    curr.pb(abs(a[i]));
    if(a[i] > 0){
      if(mp[a[i]] == 2 || mp[a[i]] == 1){
        cout << -1;
        return;
      }
      mp[a[i]] = 1;
      cnt++;
    }
    else{
      if(mp[-1 * a[i]] == 0 || mp[-1 * a[i]] == 2){
        cout << -1;
        return;
      }
      mp[-1 * a[i]] = 2;
      --cnt;
    }

    if(cnt == 0){
      ans.pb(curr.size());
      for(auto x : curr)
        mp[x] = 0;
        curr.clear();
    }
  }

  if(!curr.empty()){
    cout << -1;
    return;
  }

  cout << ans.size() << endl;
  for(auto x : ans)
    cout << x << " ";
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
