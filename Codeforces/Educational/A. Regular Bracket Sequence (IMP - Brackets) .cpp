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
  vi x(4);
  REP(i, 0, 4)  cin >> x[i];
  if((x[0] == x[3]) && (x[2] == 0 || x[0] > 0))// 2nd condition -> )( should be 0 'OR' even if it's present, there should be atleast 1 (( and corresponding )) at end.
    cout << 1 << endl;
  else
    cout << 0 << endl;
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
