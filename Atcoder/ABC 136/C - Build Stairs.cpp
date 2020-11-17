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

  int n;
  cin >> n;
  vi h(n);
  REP (i, 0, n)  cin >> h[i];

  for(int i = n - 1; i > 0; i--){
      if (h[i - 1] <= h[i])
        continue;
      else if (h[i - 1] == h[i] + 1)
        h[i - 1]--;
      else{
        cout << "No\n";
        return 0;
      }
  }
  cout << "Yes\n";

  return 0;
}
