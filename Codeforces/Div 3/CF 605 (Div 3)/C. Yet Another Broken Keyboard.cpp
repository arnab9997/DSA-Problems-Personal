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

  int n, k;
  cin >> n >> k;
  string str;
  cin >> str;
  vector<char> c(k);
  REP(i, 0, k)  cin >> c[i];

  vector<int> abc;

  int cnt = 0;
  for(int i = 0; i < n; i++){
    if(find(all(c), str[i]) != c.end())
      cnt++;
    else{
      abc.pb(cnt);
      cnt = 0;
    }
  }
  abc.pb(cnt);

  ll ans = 0;
  for(ll x : abc)
    ans += x * (x + 1) / 2;
  cout << ans << endl;

  return 0;
}
