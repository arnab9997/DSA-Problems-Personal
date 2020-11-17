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
  //Code goes past here

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, 0, n)  cin >> a[i];
    vector<ll> dp;      //dp[i] = sum of (longest alternating subsequence of length i)
    dp.pb(0);

    int maxi, mini;

    for(int i = 0; i < n; ){
      if(a[i] > 0){
        maxi = a[i];
        while(a[i] > 0 && i < n){
          if(a[i] > maxi)
            maxi = a[i];
          i++;
        }
        dp.pb(dp.back() + maxi);
      }
      else if(a[i] < 0){
        mini = a[i];
        while(a[i] < 0 && i < n){
          if(a[i] > mini)
            mini = a[i];
          i++;
        }
        dp.pb(dp.back() + mini);
      }
    }
    cout << dp.back() << endl;
  }
  return 0;
}
