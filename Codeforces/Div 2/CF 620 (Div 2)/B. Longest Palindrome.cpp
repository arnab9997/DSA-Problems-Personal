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

    int n, m;
    cin >> n >> m;
    vector<string> abc(n);
    set<string> dict;
    REP(i, 0, n){
      cin >> abc[i];
      dict.insert(abc[i]);
    }

    vector<string> left, right;
    string mid;

    REP(i, 0, n){
      string x = abc[i];
      reverse(all(x));
      if(x == abc[i])
        mid = x;
      else if(dict.find(x) != dict.end()){
        left.pb(abc[i]);
        right.pb(x);
        dict.erase(abc[i]);
        dict.erase(x);
      }
    }

    cout << left.size() * m * 2 + mid.size() << endl;

    for(auto x : left)
      cout << x;
    cout << mid;
    reverse(all(right));
    for(auto x : right)
      cout << x;
    cout << endl;
  return 0;
}
