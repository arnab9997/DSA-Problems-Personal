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

void solve(){
  ll x, y, n;
  cin >> x >> y >> n;
  cout << (n - y) / x * x + y << endl;

  //               M2:
  // ll r = n % x;
  // if(y > r)
  //   cout << n - r - (x - y) << endl;
  // else
  //   cout << n - (r - y) << endl;
}

int main(){
  FAST();
  //Code goes past here

  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
