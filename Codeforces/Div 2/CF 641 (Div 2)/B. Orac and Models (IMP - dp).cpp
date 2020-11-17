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
  FAST();
  //Code goes past here:
  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    vi s(n + 1);
    REP (i, 1, n + 1)  cin >> s[i];       // As 0-indexing will cause division errors
    vi dp(n + 1, 1);                      // As all single models are acceptable
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
      for(int j = i * 2; j <= n; j += i){      // traversing through all 'j' divisible by 'i'
        if(s[j] > s[i]){
          dp[j] = max (dp[j], dp[i] + 1);
        }
      }
    }

    int ans = 0;
    REP(i, 0, n + 1)
    	ans = max (ans, dp[i]);
    cout << ans << endl;
  }
  return 0;
}
