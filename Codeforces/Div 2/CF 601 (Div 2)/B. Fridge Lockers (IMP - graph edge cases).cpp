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
  return (a.second < b.second);
}

int main(){
  FAST();
  //Code goes past here:

  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    vii a(n);
    REP(i, 0, n){
      a[i].first = i + 1;
      cin >> a[i].second;
    }
    sort(all(a), comp);

    if(m < n || (m == n && n == 2)){
      cout << -1 << endl;
      continue;
    }

    int ans = 0;
    vii abc;

    REP(i, 0, n - 1){
      ans += (a[i].second + a[i + 1].second);
      abc.pb({a[i].first, a[i + 1].first});
    }

    ans += a[0].second + a[n - 1].second;
    abc.pb({a[0].first, a[n - 1].first});

    m = m - n;
    if(m > 0){
      ans += m * (a[0].second + a[1].second);
      REP(i, 0, m)
        abc.pb({a[0].first, a[1].first});
    }

    cout << ans << endl;
    for(auto x : abc)
      cout << x.first << " " << x.second << endl;
  }

  return 0;
}
