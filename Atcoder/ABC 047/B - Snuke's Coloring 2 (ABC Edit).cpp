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

  int w, h, n;
  cin >> w >> h >> n;

  int xmin = w, xmax = 0, ymin = h, ymax = 0;
  REP(i, 0, n){
    int x, y, a;
    cin >> x >> y >> a;
    if(a == 1)
      xmax = max (xmax, x);

    else if(a == 2)
      xmin = min (xmin, x);

    else if(a == 3)
      ymax = max (ymax, y);

    else if(a == 4)
      ymin = min (ymin, y);

  }

  if ((xmax >= xmin) || (ymax >= ymin))
    cout << 0 << endl;
  else
    cout << (xmin - xmax) * (ymin - ymax) << endl;
  return 0;
}
