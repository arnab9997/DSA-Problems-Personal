/*A*/
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
    int n;
    cin >> n;
    vector<string> abc(n);
    REP(i, 0, n)
      cin >> abc[i];

    bool flag = 1;

    for(int i = n - 2; i >= 0; --i){
      for(int j = n - 2; j >= 0; --j){
        if(abc[i][j] == '1' && abc[i + 1][j] == '0' && abc[i][j + 1] == '0')
          flag = 0;
      }
    }

    cout << (flag ? "YES" : "NO") << endl;
  }
  return 0;
}
