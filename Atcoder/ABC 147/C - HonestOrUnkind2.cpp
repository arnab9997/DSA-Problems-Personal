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

int counter(int bitmask){
  return __builtin_popcount(bitmask);
}

int main(){
  FAST();

  int n;
  int A[16], x[16][16], y[16][16];

  cin >> n;
  REP(i, 1, n + 1){
    cin >> A[i];
    REP(j, 1, A[i] + 1)
      cin >> x[i][j] >> y[i][j];
  }

  int ans = 0, i, j, bitmask;
  for(int bitmask = 1; bitmask < (1<<n); bitmask++){   // bitmask to generate all possible subsets. ith is set if ith person is honest
    bool ok = true;
    for(i = 1; i <= n; i++){                            // for traversing through all bits of the bitmask
      if((bitmask & (1 << (i - 1))) == 0)               // ith bit in bitmask isn't set (person isn't honest)
        continue;
      for(j = 1; j <= A[i]; j++){                       // ith bit is set (person is honest), so check for contradicitng testimonies
        if(((bitmask >> (x[i][j] - 1)) & 1) ^ y[i][j])  // (bitmask >> (x[i][j] - 1)) checks if xth person is being discussed about talk. // (...... ^ y[i][j]) checks: y = 1: homest, y = 0: unkind
          ok = false;
      }
    }
    if(ok)
      ans = max(ans, counter(bitmask));
  }

  cout << ans << endl;
  return 0;
}
