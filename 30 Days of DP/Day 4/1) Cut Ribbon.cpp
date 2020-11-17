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

  int n, a, b, c;
  cin>>n>>a>>b>>c;

  int dp[n+1];
  dp[0] = 0;
  fill(dp+1,dp+n+1,-1e9);

  REP(i, a, n+1)  dp[i] = max(dp[i], dp[i-a]+1);
  REP(i, b, n+1)  dp[i] = max(dp[i], dp[i-b]+1);
  REP(i, c, n+1)  dp[i] = max(dp[i], dp[i-c]+1);

  cout<<dp[n]<<endl;
  return 0;
}
