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
const ll mod = 1e9 + 7;

void FAST(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main(){
  FAST();

  int n, i;
  cin >> n;
  vi W(n);
  REP(i, 0, n)  cin >> W[i];

  vi prefix(n, 0);
  REP(i, 0, n)
    prefix[i] = (i == 0) ? (W[i]) : (prefix[i - 1] + W[i]);

  int ans = INT_MAX;
  REP(i, 0, n){
    int difference = abs((prefix[n - 1] - prefix[i]) - prefix[i]);
    ans = min(ans, difference);
  }

  cout << ans << endl;
  return 0;
}
