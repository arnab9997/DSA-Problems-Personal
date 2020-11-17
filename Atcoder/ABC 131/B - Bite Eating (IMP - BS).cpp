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

  int n, l;
  cin >> n >> l;

  int left = l;             // 0-indexed
  int right = l + n - 1;

  int eat;
  if (right <= 0)
    eat = right;
  else if (left >= 0)
    eat = left;
  else
    eat = 0;

  int sum = (n * l) + n * (n - 1) / 2;
  cout << sum - eat << endl;

  return 0;
}
