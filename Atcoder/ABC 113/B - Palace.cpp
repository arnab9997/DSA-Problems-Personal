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
  int t, a;
  cin >> t >> a;
  vector<double> h(n);

  double diff = 1e9;
  int ans;
  REP(i, 0, n){
      cin >> h[i];
      h[i] = t - h[i] * 0.006;
      if(abs(h[i] - a) < diff){
        diff = abs(h[i] - a);
        ans = i + 1;
      }
  }

  cout << ans << endl;


  return 0;
}
