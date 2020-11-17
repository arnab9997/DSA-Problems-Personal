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
    vi arr;
    int i = 1;
    while(n){
      if(n % 10)
        arr.pb(n % 10 * i);
      n /= 10;
      i *= 10;
    }
    cout << arr.size() << endl;
    REP(i, 0, arr.size())   cout << arr[i] << " ";
    cout << endl;
  }
  return 0;
}
