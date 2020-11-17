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
    ll n, k;
    cin >> n >> k;
    vi a(n), b(n);
    REP(i, 0, n)    cin >> a[i];
    REP(i, 0, n)    cin >> b[i];
    int sum = 0;

    sort(all(a));
    sort(all(b));

    REP(i, 0, n){
        if(a[i] < b[n - i - 1]){
            if(k > 0){
                sum += b[n - i - 1];
                k--;
                continue;
            }
            else{
                sum += a[i];
            }
        }
        else
           sum += a[i];
    }

    cout << sum << endl;
  }


  return 0;
}
