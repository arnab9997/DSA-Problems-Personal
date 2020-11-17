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

  int n, m;
  cin >> n >> m;
  vector<vector<int> > a(n, vector<int>(m, 0));
  REP(i, 0, n)
    REP(j, 0, m)
      cin >> a[i][j];

  for(int i = n - 1; i >= 0; i--){
    for(int j = m - 1; j >= 0; j--){
      if(a[i][j] == 0)
        a[i][j] = min (a[i + 1][j] - 1, a[i][j + 1] - 1);
    }
  }

  // Check Rows
  for(int i = 0; i < n; i++){
    for(int j = 1; j < m; j++){
      if(a[i][j] <= a[i][j - 1]){
        cout << -1 << endl;
        break;
      }
    }
  }

  // Check Columns
  for(int j = 0; j < m; j++){
    for(int i = 1; i < n; i++){
      if(a[i][j] <= a[i - 1][j]){
        cout << -1 << endl;
        break;
      }
    }
  }

  int sum = 0;
  REP(i, 0, n)
    REP(j, 0, m)
      sum += a[i][j];
  cout << sum << endl;

  return 0;
}
