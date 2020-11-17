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

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vi a(n, 0);
    priority_queue<pair<int, pair<int, int> > > q;
    q.push({n, {0, (n - 1)}});
    int cnt = 1;

    while(!q.empty()){
      int l = -1 * q.top().second.first;
      int r = q.top().second.second;

      int len = q.top().first;
      q.pop();

      if(l > r)
        continue;

      int mid = (l + r) / 2;
      a[mid] = cnt++;

      q.push({mid - l + 1, {(-1 * l), mid - 1}});
      q.push({r - mid + 1, {-1 * (mid + 1), r}});
    }

    for (auto it : a)
      cout << it << " ";
    cout << endl;
  }
  return 0;
}
