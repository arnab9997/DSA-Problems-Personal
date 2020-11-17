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

  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll dp[n+1];
    dp[1] = 1;
    dp[2] = 2;
    REP(i, 3, n+1)  dp[i] = (dp[i-1] + dp[i-2]) % mod;
    cout<<dp[n]<<endl;
  }

  return 0;
}
