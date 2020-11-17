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
    string str;
    cin >> str;
    map<char, int> mp;

    for(auto ch : str)
      mp[ch]++;

    int h = min (mp['L'], mp['R']);
    int v = min (mp['U'], mp['D']);

    string ans;
    if(min(h, v) == 0){
      if(v == 0){
        h = min(h, 1);
        ans += string(h, 'L');
        ans += string(h, 'R');
      }
      else{
        v = min(v, 1);
        ans += string(v, 'U');
        ans += string(v, 'D');
      }
    }
    else{
      ans += string(h, 'L');
      ans += string(v, 'U');
      ans += string(h, 'R');
      ans += string(v, 'D');
    }

    cout << ans.length() << endl;
    if(ans.length() > 0)
      cout << ans << endl;
  }

  return 0;
}
