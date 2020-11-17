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
    string str, ans;
    cin >> n >> str;

    map<pair<int, int>, int> abc; // <<x, y>, index>
    int x = 0, y = 0;
    abc[{x, y}] = 0;

    int l = -1, r = n;

    for(int i = 0; i < n; i++){
      if(str[i] == 'L')
        x -= 1;
      else if(str[i] == 'R')
        x += 1;
      else if(str[i] == 'D')
        y -= 1;
      else if(str[i] == 'U')
        y += 1;

      if(abc.count({x, y})){
        if(i - abc[{x, y}] + 1 < r - l + 1){
          l = abc[{x, y}];
          r = i;
        }
      }
      abc[{x, y}] = i + 1;    //if coordinate is not present, insert - if present, update
    }

    if(l == -1)
      cout << -1 << endl;
    else
      cout << l + 1 << " " << r + 1 << endl;
  }
  return 0;
}
