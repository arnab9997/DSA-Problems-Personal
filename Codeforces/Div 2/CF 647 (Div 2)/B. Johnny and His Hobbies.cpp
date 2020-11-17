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
  int n;
  cin >> n;
  vi s(n);
  REP(i, 0, n)  cin >> s[i];
  sort(all(s));

  int k = -1;
  for(int bit = 1; bit <= 1024; bit++){
    vi temp;
    for(int i = 0; i < n; i++)
      temp.pb(s[i] ^ bit);
    sort(all(temp));
    int i = 0;
    for( ; i < n; i++){
      if(s[i] != temp[i])
        break;
    }
    if(i == n){
      k = bit;
      break;
    }
  }
  cout << k << endl;
}

int main(){
  FAST();
  //Code goes past here:

  int t = 1;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
