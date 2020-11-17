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

  int n, m, c;
  cin >> n >> m >> c;
  vi b(m);
  REP(i, 0, m)  cin >> b[i];

  int ans = 0;
  REP(i, 0, n){
      int x = 0;
      REP(j, 0, m){
          int a;
          cin >> a;
          x += a * b[j];
      }
      if(x + c > 0)
        ans++;
  }
  cout << ans << endl;


  return 0;
}
