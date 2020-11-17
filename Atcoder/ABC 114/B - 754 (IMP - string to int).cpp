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

  string s;
  cin >> s;
  int diff = INT_MAX;
  for(int i = 0; i + 2< s.length(); i++){
    int x = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + s[i + 2] - '0';
    diff = min(diff, abs(x - 753));
  }
  cout << diff << endl;



  return 0;
}
