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

int fact(int n){
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

double abc(ii a, ii b){
    double x = a.first - b.first;
    double y = a.second - b.second;
    return pow(x*x + y*y, 0.5);
}

int main(){
  FAST();
  int n;
  cin >> n;

  vii town(n);
  REP(i, 0, n){
      int x, y;
      cin >> x >> y;
      town[i] = {x, y};
  }
  sort(all(town));          // next_permutation requires sorted list else will start giving permutations from middle of list

  double dist = 0.0;
  //M1//
  do{
    REP(i, 1, n){
        dist += abc(town[i], town[i - 1]);
        //cout << town[i].first << " " << town[i].second <<endl;
    }
  }while(next_permutation(all(town)));

  //M2//
  for(int i = 1; i <= N; i++){
    for(int j = i + 1; j <= N; j++) ans += dist(i, j) * 2 / N;
  }

  cout << fixed << setprecision(10) << dist/fact(n) << endl;

  return 0;
}
