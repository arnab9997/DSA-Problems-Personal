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
  int k;
  cin >> k;

  bool flag = 0;
  int n, m;

  for(int i = 5; i * i <= k; i++){
    if(k % i == 0 && k / i >= 5){
      m = i;
      n = k / i;
      flag  = 1;
      break;
    }
  }

  if(flag == 0){
    cout << -1 << endl;
    return;
  }
  else{
    string vow, temp("aeiou");
    REP(i, 0, m)
        vow += temp;
    string row(vow.begin(), vow.begin() + m);

    REP(i, 0, n){
      cout << row;
      row += row;
      row = string(row.begin() + 1, row.begin() + m + 1);       //rotation
    }
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
