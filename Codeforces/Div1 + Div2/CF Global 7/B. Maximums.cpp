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
  //Code goes past here

  int n;
  cin >> n;
  vector<ll> b(n), a(n);
  REP(i, 0, n)  cin >> b[i];

  ll x = 0;

  REP(i, 0, n){
      a[i] = b[i] + x;
      x = max(x, a[i]);
  }

  REP(i, 0, n)  cout << a[i] << " ";
  cout << endl;

  return 0;
}
