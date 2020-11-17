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

  int n;
  cin >> n;
  while(n--){
    string s, t;
    cin >> s >> t;

    // if(s == t){
    //   cout << "YES\n";
    //   continue;
    // }
    // if(s.length() > t.length()){
    //   cout << "NO\n";
    //   continue;
    // }

    vector<pair<char, int> > freqs;
    vector<pair<char, int> > freqt;

    REP(i, 0, s.length()){
      int x = 1;
      freqs.pb({s[i], x});
      while(s[i] == s[i + 1]){
        i++;
        x++;
      }
      freqs.back().second = x;
    }

    REP(i, 0, t.length()){
      int x = 1;
      freqt.pb({t[i], x});
      while(t[i] == t[i + 1]){
        i++;
        x++;
      }
      freqt.back().second = x;
    }

    bool flag = 1;
    if(freqs.size() != freqt.size())
      flag = 0;

    REP(i, 0, freqs.size()){
      if(freqt[i].first == freqs[i].first && freqt[i].second >= freqs[i].second)
        continue;
      else{
        flag = 0;
        break;
      }
    }

    cout << (flag ? "YES\n" : "NO\n");

  }
  return 0;
}
