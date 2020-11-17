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
    ll n, s, k;
    cin >> n >> s >> k;
    vi a(k);
    REP(i, 0, k)  cin >> a[i];

    for(int i = 0; i <= k; i++){    // maximum travel is 'k' floors and minimum travel is '0' floors
      if(s - i >= 1 && find(all(a), s - i) == a.end()){ // travel "down" the building
        cout << i << endl;
        break;
      }
      if(s + i <= n && find(all(a), s + i) == a.end()){ // travel "up" the building
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}
