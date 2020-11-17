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
    cin >> n;
    vi a(n);
    REP(i, 0, n)    cin >> a[i];

    int cnt = 0, ansA = 0, ansB = 0;
    int sumA = 0, sumB = 0;
    int i = 0, j = n - 1;

    while(i <= j){
      if(cnt % 2 == 0){
        while(sumA <= sumB && i <= j){
          sumA += a[i];
          i++;
        }
        sumB = 0;
        ansA += sumA;
      }
      else{
        while(sumB <= sumA && i <= j){
          sumB += a[j];
          j--;
        }
        sumA = 0;
        ansB += sumB;
      }
      ++cnt;
    }

    cout << cnt << " " << ansA <<  " " << ansB << endl;
  }
  return 0;
}
