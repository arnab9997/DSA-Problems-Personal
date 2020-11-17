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

bool comp(tuple<string, int, int> &a, tuple<string, int, int> &b){
  if(get<0>(a) == get<0>(b)){
    return (get<1>(a) > get<1>(b));
  }
  else{
    return (get<0>(a) < get<0>(b));
  }
}

int main(){
  FAST();

  int n, i;
  cin >> n;
  vector<tuple<string, int, int> > rest(n);

  REP(i, 0, n){
    string name;
    int score;
    cin >> name >> score;
    rest[i] = make_tuple(name, score, i + 1);
  }

  sort(all(rest), comp);

  REP(i, 0, n)
    cout << get<2>(rest[i]) << endl;


  return 0;
}
