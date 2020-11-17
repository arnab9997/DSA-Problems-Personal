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
    int a, b, c;
    cin >> a >> b >> c;
    string str;
    cin >> str;

    int r = 0, p = 0, s = 0;
    for(auto x : str){
      if(x == 'R')
        r++;
      else if(x == 'P')
        p++;
      else if(x == 'S')
        s++;
    }

    if(min (a, s) + min (b, r) + min (c, p) < ceil(double(n) / 2)){
      cout << "NO\n";
      continue;
    }

    string ans;
    REP(i, 0, n){
      if(str[i] == 'R' && b > 0){
        ans += 'P';
        b--;
      }
      else if(str[i] == 'P' && c > 0){
        ans += 'S';
        c--;
      }
      else if(str[i] == 'S' && a > 0){
        ans += 'R';
        a--;
      }
      else
        ans += '_';
    }
    REP(i, 0, n){
      if(ans[i] != '_')
        continue;
      if(a > 0){
        ans[i] = 'R';
        a--;
      }
      else if(b > 0){
        ans[i] = 'P';
        b--;
      }
      else if(c > 0){
        ans[i] = 'S';
        c--;
      }
    }

    cout << "YES\n";
    cout << ans << endl;
  }

  return 0;
}
