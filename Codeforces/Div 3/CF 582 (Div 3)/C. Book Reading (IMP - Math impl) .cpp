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
  ll n, m;
  cin >> n >> m;

  n = n / m;        // number of numbers divisible by m between 1 & n

  vi digits(10);
  REP(i, 0, 10) digits[i] = ((i + 1) * m) % 10;

  ll sum = 0;
  REP(i, 0, n % 10)
    sum += digits[i];

  sum += n / 10 * accumulate(all(digits), 0LL);

  cout << sum << endl;
}

int main(){
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
  FAST();
  //Code goes past here:

  int t = 1;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
