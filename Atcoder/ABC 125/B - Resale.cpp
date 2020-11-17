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
const ll mod = 1e9 + 7;

void FAST(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main(){
  FAST();

  int n;
  cin >> n;
  vi v(n), c(n);
  REP(i, 0, n)  cin >> v[i];
  REP(i, 0, n)  cin >> c[i];

  vi diff(n);
  REP(i, 0, n)  diff[i] = v[i] - c[i];
  sort(all(diff));

  int ans = 0;
  REP(i, 0, n){
      if(diff[i] > 0)
        ans += diff[i];
  }
  cout << ans << endl;

  return 0;
}
