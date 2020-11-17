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

  int n, i;
  cin>>n;

  int a[n];
  int dp[n][3];

  REP(i, 0, n)  cin>>a[i];
  REP(i, 0, n){
    dp[i][0] = dp[i][1] = dp[i][2] = 1000;
  }

  //dp[i][0] -> minimum number of days rested till current day if rest today;    dp[i][0] = 1 + minimum(dp[i-1][0], dp[i-1][1], dp[i-1][2])
  //dp[i][1] -> minimum number of days rested till current day if contest today  dp[i][1] = minimun(dp[i-1][0], dp[i-1][2])
  //dp[i][2] -> minimum number of days rested till current day if gym today      dp[i][2] = minimun(dp[i-1][0], dp[i-1][1])

  dp[0][0] = 1;
  if(a[0] == 1 || a[0] == 3)  dp[0][1] = 0;
  if(a[0] == 2 || a[0] == 3)  dp[0][2] = 0;

  REP(i, 1, n){
    //we can always rest
    dp[i][0] = min({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1;

    //see if we can do a contest
    if(a[i] == 1 || a[i] == 3) //the prev day we could have rested or gym
      dp[i][1] = min({dp[i-1][0], dp[i-1][2]});

    //see if we can do gym
    if(a[i]==2 || a[i] == 3) //the prev day we could have rested or contest
      dp[i][2] = min({dp[i-1][0], dp[i-1][1]});
  }

  cout<<min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
  return 0;
}
