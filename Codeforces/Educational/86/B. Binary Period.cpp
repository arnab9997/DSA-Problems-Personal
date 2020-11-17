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
    string str, ans;
    cin >> str;

    if(count(all(str), '0') == 0 || count(all(str), '1') == 0){
        cout << str << endl;
        continue;
    }

    int n = str.length();
    REP(i, 0, n)
      ans += "01";

    cout << ans << endl;
  }
  return 0;
}
