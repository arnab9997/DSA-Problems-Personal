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

int prod(ll x){
    int mini = x % 10;
    int maxi = x % 10;
    while(x){
        if(x % 10 < mini)   mini = x % 10;
        if(x % 10 > maxi)   maxi = x % 10;
        x /= 10;
    }
    return (mini * maxi);
}

int main(){
  FAST();
  //Code goes past here

  int t;
  cin >> t;
  while(t--){
    ll a, k;
    cin >> a >> k;
    set<ll> abc;
    while(--k){
      a = a + prod(a);
      if(abc.find(a) == abc.end())
        abc.insert(a);
      else
        break;
    }
    cout << a << endl;
  }
  return 0;
}
