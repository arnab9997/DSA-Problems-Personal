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

  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int sum = 0;
  if(a >= k){
    sum += k * 1;
    k = 0;
  }
  else{
    sum += a * 1;
    k -= a;
  }

  if(b >= k){
    sum += k * 0;
    k = 0;
  }
  else{
    sum += b * 0;
    k -= b;
  }

  if(c >= k){
    sum += k * -1;
    k = 0;
  }
  else{
    sum += c * -1;
    k -= c;
  }

  cout << sum << endl;


  return 0;
}
