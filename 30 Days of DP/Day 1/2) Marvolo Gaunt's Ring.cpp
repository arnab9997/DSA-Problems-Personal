//                                  _                 ______   ______   ______   ______
//                                 | |               |  __  | |  __  | |  __  | |____  |
//   __ _   ____    _____    _  _  | |____           | |__| | | |__| | | |__| |      | |
//  / _` | |  __| /  __  |  / _` | |  __  |          |____  | |____  | |____  |      | |
// | (_| | | |    | |  | | | (_| | | |__| |  ______   ____| |  ____| |  ____| |      | |
//  \__,_| |_|    |_|  |_|  \__,_| |______| |______| |______| |______| |______|      |_|

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
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	freopen("error.txt", "w", stderr);
  #endif
  FAST();
  //Code goes past here:

  ll p, q, r, n, i, j, k;
  cin>>n>>p>>q>>r;
  ll a[n];
  REP(i, 0, n)  cin>>a[i];

  ll dp0[n], dp1[n], dp2[n];

  dp0[0] = a[0]*p;
  dp1[0] = a[0]*q + dp0[0];
  dp2[0] = a[0]*r + dp1[0];

  REP(i, 1, n){
    dp0[i] = max(dp0[i-1], a[i]*p);
    dp1[i] = max(dp1[i-1], a[i]*q + dp0[i]);
    dp2[i] = max(dp2[i-1], a[i]*r + dp1[i]);
  }
  cout<<dp2[n-1]<<endl;

  return 0;
}
