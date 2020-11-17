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
#define sq(a) (a)*(a)

const double PI = 3.141592653589793238460;
const ll mod = 1e9+7;

void FAST(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

bool comp(const pair<int, int> &a, const pair<int, int> &b){
  return (a.first > b.second);
}

int f(int x, int d){
  double temp = x + ceil (d / (x + 1));
  return temp;
}

int main(){
  FAST();
  //Code goes past here

  int t;
  cin >> t;
  while(t--){
    int n, d;
    cin >> n >> d;
    int l = 0; r = n;                   //int l = 1, r = d - 1; -->> Wrong

    bool flag = false;
    while(l <= r){
      int mid = l + (r - l) / 2;
      int time = mid + ceil((double)d / (mid + 1));

      if(time > d)
        r = mid - 1;
      else{
        if(time <= n){
          flag = true;
          cout << "YES\n";
          break;
        }
        l = mid + 1;
      }
    }
    if(falg == false)
      cout << "NO\n";
  }
  return 0;
}
