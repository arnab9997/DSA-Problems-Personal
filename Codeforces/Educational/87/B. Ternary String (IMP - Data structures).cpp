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
    string str;
    cin >> str;
    vector<pair<char, int> > c;

    for(auto x : str){
      if(c.empty() || c.back().first != x)
        c.push_back({x, 1});
      else
        c.back().second++;
    }

    int ans = int(1e9);
    int m = c.size();
    for(int i = 1; i <= m - 2; i++){
      if(c[i - 1].first != c[i + 1].first)
        ans = min (ans, c[i].second + 2);
    }

    if(ans > str.length())
      ans = 0;

    cout << ans << endl;
  }

  return 0;
}
