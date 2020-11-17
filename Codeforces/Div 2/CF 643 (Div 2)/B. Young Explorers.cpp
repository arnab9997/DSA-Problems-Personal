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
}   return res;

int main(){
  FAST();
  //Code goes past here

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vi e(n);
    REP(i, 0, n)  cin >> e[i];
    sort(all(e));

    int ans = 0;
    vi group;

    REP(i, 0, n){
      if(group.size() + 1 >= e[i]){
        group.pb(e[i]);   // Just for understanding :P
        group.clear();
        ans++;
      }
      else{
        group.pb(e[i]);
      }
    }
    cout << ans << endl;
  }
  return 0;
}
