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
}
int main(){
  FAST();
  //Code goes past here:

  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    vi a(n), p(n);

    REP(i, 0, n)
      cin >> a[i];

    REP(i, 0, m){
      int x;
      cin >> x;
      p[x - 1] = 1;
    }

    while(true){
      bool ok = 0;
      REP(i, 0, n - 1){
        if(p[i] && a[i] > a[i + 1]){
          ok = 1;
          swap(a[i], a[i + 1]);
        }
      }
      if(!ok)
        break;
    }

    bool flag = 1;
    REP(i, 0, n - 1){
      flag &= (a[i] <= a[i + 1]);
    }

    cout << (flag ? "YES" : "NO") << endl;
  }
  return 0;
}
