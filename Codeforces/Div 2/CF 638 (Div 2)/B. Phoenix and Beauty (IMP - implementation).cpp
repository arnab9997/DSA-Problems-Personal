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

  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    set<int> abc;
    REP(i, 0, n){
      int x;
      cin >> x;
      abc.insert(x);
    }
    if(abc.size() > k){
      cout << -1 << endl;
      continue;
    }

    cout << n * k << endl;          // or print LCM(n, k) times - bit untidy thing though-|
    for(int i = 0; i < n; i++){     // i < LCM(n, k)                            <<<<------|
      for(auto x : abc)
        cout << x << " ";
      for(int j = 0; j < k - abc.size(); j++)
        cout << 1 << " ";
    }
    cout << endl;
  }
  return 0;
}
