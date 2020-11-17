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

string str;
//isValid(int k) checks if there exist a sub array of size k such that 1 , 2 and 3 appear at least 1 time in it.
bool isValid(int k){      //isValid function is the f(x) function here
  int arr[4] = {0};       // frequency array
  for(int i = 0; i < k - 1; i++)
    arr[str[i] - '0']++;

  for(int i = k - 1; i < str.length(); i++){
    arr[str[i] - '0']++;
    if(arr[1] > 0 && arr[2] > 0 && arr[3] > 0)
      return true;
    arr[str[i - k + 1] - '0']--;
  }
  return false;
}
int ans(){
  int INF = int(1e9);
  int res = INF;
  int L = 3; // least value of string should be 3
  int R = str.length();

  while(L <= R){
    int mid = L + (R - L) / 2;

    if(isValid(mid)){
      res = min(res, mid);
      R = mid - 1;
    }
    else
      L = mid + 1;
  }
  if(res == INF)
    return 0;
  else
    return res;
}

int main(){
  FAST();
  //Code goes past here

  int t;
  cin >> t;
  while(t--){
    cin >> str;
    //f(x) = returns true if there exists a subarray of length x such that 1, 2, 3 all appear atleast 1 time.
    //yes, this function is monotonic as f(x + 1) > f(x) (for length, not bool), so Binary search can be applied

    cout << ans() << endl;
  }
  return 0;
}
