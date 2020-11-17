  #include<bits/stdc++.h>
  using namespace std;

  #define ll long long
  #define endl '\n'
  //#define REP(i, a, n) for(int i=a; i<n; ++i)
  #define REP(i, st, en) for(__typeof(en) i=(st)-(st>en); i!=(en)-(st>en); i+=1-2*(st>en))
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

  void solve(){
    string str;
    cin >> str;

    int cnt0 = 0, cnt1 = 0;
    for(auto it : str){
      cnt0 += (it == '0');
      cnt1 += (it == '1');
    }
    int ans = min(cnt0, cnt1);      // changing whole string to 1/0 respectively

    int prefix0 = 0, prefix1 = 0;
    for(auto it : str){
      prefix0 += (it == '0');       //number of 0s before it (inclusive)
      cnt0 -= (it == '0');          //number of 0s after it (inclusive)
      prefix1 += (it == '1');
      cnt1 -= (it == '1');

      ans = min (ans, prefix1 + cnt0);      // changing string to 000001111111
      ans = min (ans, prefix0 + cnt1);      // changing string to 111111100000
    }

    cout << ans << endl;
  }

  int main(){
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif
    FAST();
    //Code goes past here:

    int t = 1;
    cin >> t;
    while(t--){
      solve();
    }
    return 0;
  }
