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

int coPrime(vector<int> abc){
  int ans = 0;
  int n = abc.size();
  REP(i, 0, n){
    REP(j, i + 1, n){
      if(__gcd(abc[i], abc[j]) == 1)
        ans++;
    }
  }
  return ans;
}

int main(){
  FAST();

  int n;
  while(cin >> n, n){
    vi abc(n);
    REP(i, 0, n)  cin >> abc[i];

    double ans;
    double totalPairs = n * (n - 1) / 2;
    double coPrimePairs = coPrime(abc);


    if(coPrimePairs == 0)
      cout << "No estimate for this data set." << endl;
    else{
      ans = sqrt(6 * totalPairs / coPrimePairs);
      cout << fixed << setprecision(6) << ans << endl;
    }
  }


  return 0;
}
