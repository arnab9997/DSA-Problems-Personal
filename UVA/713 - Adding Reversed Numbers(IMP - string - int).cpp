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

  int n;
  cin >> n;
  while(n--){
    string a, b, ans;
    cin >> a >> b;

    if(a.length() > b.length())
      swap(a, b);

    int i = 0, carry = 0, rem = 0;
    while(i != a.length()){
      int x = (a[i] - '0') + (b[i] - '0') + carry;        // x stores a[i] + b[i]. But both of them are offset by 48, so you gotta subtract them by 48 each
      rem = x % 10;
      carry = x / 10;
      ans.pb(rem + '0');
      i++;
    }
    while(i != b.length()){
      int x = (b[i] - '0') + carry;
      rem = x % 10;
      carry = x / 10;
      ans.pb(rem + '0');
      i++;
    }

    if(carry)
        ans.pb(carry + '0');

    i = 0;
    while(ans[i] == '0')
      i++;

    ans = ans.substr(i);

    cout << ans << endl;
  }

  return 0;
}
