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
  vi b(n - 1), a(n);
  REP(i, 0, n - 1)  cin >> b[i];

  a[0] = b[0];
  a[n - 1] = b[n - 2];
  for(int i = 1; i <= n - 2; i++)
    a[i] = min(b[i], b[i - 1]);

  ll sum = 0;
  REP(i, 0, n)  sum += a[i];

  cout << sum << endl;

  return 0;
}
