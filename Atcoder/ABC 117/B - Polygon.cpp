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

  int n;
  cin >> n;
  vi l(n);
  int sum = 0;
  REP(i, 0, n){
      cin >> l[i];
      sum += l[i];
  }

  bool flag = 1;
  REP(i, 0, n){
      if(l[i] >= sum - l[i])
        flag = 0;
  }

  cout << ((flag == 1) ? "Yes" : "No") << endl;



  return 0;
}
