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

ll dp[n+1];
ll stairs(ll n){
  // if(n==1 || n==2)
  //   return n;
  // else if(n==3)
  //   return 4;
  // return (stairs(n-1) + stairs(n-2) + stairs(n-3)) % mod;
  //above code takes exponrntial run time(which is not dp paradigm - simple recursion)

  if(n==1 || n==2)
    return n;
  else if(n==3)
    return 4;

  if(dp[n] != 0)  //since dp is declared globally, so initially all are 0. if dp[n] has been calculated, return dp[n]
    return dp[n];
  dp[n] = stairs(n-1) + stairs(n-2);
  return dp[n];
  //runs in O(n) time in dp
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
    //cout<<stairs(n)<<endl; //recursive call
    int t;
    cin>>t;
    while(t--){
      ll n, i;
      cin>>n;

      ll dp[n];

      dp[1] = 1;
      dp[2] = 2;
      dp[3] = 4;

      for(i=4; i<n+1; i++)
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % mod;

      cout<<dp[n]<<endl;
    }

  }

  return 0;
}
