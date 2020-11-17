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

  map<string, int> rec;

  REP(i, 0, n){
    string str;
    cin >> str;
    sort(all(str));
    rec[str]++;
  }

  ll ans = 0;
  for(auto x : rec){
    ans += 1LL * x.second * (x.second - 1) / 2;     // VVI - integer overflow when multiplying
  }

  cout << ans << endl;

  return 0;
}
