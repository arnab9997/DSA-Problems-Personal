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
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= k; i++){
      int x = 2;
      while(true){
        if(n % x == 0){
          n = n + x;
          break;
        }
        x++;
      }
      if(n % 2 == 0){
        n += 2 * (k - i);
        break;
      }
    }

    cout << n << endl;

  }

  return 0;
}
