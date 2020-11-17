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
  vector<ll> t(n), cnt(101, 0);
  REP(i, 0, n)  cin >> t[i];

  ll psum = 0;
  REP(i, 0, n){
    ll d = psum + t[i] - m, k = 0;

    if(d > 0){          // Enter here when some have to fail due to time shortage
      for(int j = 100; j > 0; j--){
        if(d <= j * cnt[j]){
          k += (d + j - 1) / j;
          break;
        }
        k += cnt[j];
        d -= j * cnt[j];
      }
    }

    psum += t[i];
    cnt[t[i]]++;
    cout << k << " ";
  }
}

int main(){
  FAST();
  //Code goes past here:

  int t = 1;
  //cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
