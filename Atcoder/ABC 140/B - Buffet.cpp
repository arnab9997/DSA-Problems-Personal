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
  vi a(n), b(n), c(n - 1);
  REP(i, 0, n)  cin >> a[i];
  REP(i, 0, n)  cin >> b[i];
  REP(i, 0, n - 1)  cin >> c[i];

  int ans = 0, last = a[0];
  REP(i, 0, n){
      ans += b[a[i] - 1];
      if(a[i] == last + 1){
        ans += c[last - 1];
        last++;
      }
      else
        last = a[i];
  }
  cout << ans << endl;


  return 0;
}
