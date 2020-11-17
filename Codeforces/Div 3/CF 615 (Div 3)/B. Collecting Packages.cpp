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
    int n;
    cin >> n;

    vii abc;
    int x = 0, y = 0;
    abc.pb({x, y});
    REP(i, 0, n){
      cin >> x >> y;
      abc.pb({x, y});
    }
    sort(all(abc));

    string ans;
    bool flag = 1;
    REP(i, 0, n){
      if((abc[i].first > abc[i + 1].first) || (abc[i].second > abc[i + 1].second)){
        flag = 0;
        break;
      }

      else{
        while(abc[i].first != abc[i + 1].first){
          ans += 'R';
          abc[i].first++;
        }
        while(abc[i].second != abc[i + 1].second){
          ans += 'U';
          abc[i].second++;
        }
      }
    }

    if(flag)
      cout << "YES\n" << ans << endl;
    else
      cout << "NO\n";
  }
  return 0;
}
