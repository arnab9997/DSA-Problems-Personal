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

ll nCr(int n, int r){
  ll ans = 1, k = 1;

  while (r){
    ans *= n;
    k *= r;

    int hcf = __gcd(ans, k);
    ans /= hcf;
    k /= hcf;

    n--;
    r--;
  }
  return ans;
}

int main(){
  FAST();

  int n, m;
  while(cin >> n >> m && n != 0 && m != 0){
    cout << n << " things taken " << m << " at a time is " << nCr(n, m)  << " exactly." << endl;
  }


  return 0;
}
