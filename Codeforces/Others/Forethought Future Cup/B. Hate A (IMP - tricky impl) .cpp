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

  string t, s, s1;
  cin >> t;
  int n = t.length();

  REP(i, 0, n){
    if(t[i] != 'a')
      s += t[i];
  }

  s1 = string(s.begin() + s.length() / 2, s.begin() + s.length());
  s = string(s.begin(), s.begin() + s.length() / 2);

  if(s.length() == 0 && s1.length() == 0){
    cout << t << endl;
    return 0;
  }

  //cout << "s: " << s << endl;
  //cout << "s1: " << s1 << endl;
  if(s == s1){
    int i = 0;
    while(s1 != t.substr(i) && i < n)
      i++;
    if(i == n)
      cout << ":(" << endl;
    else
      cout << t.substr(0, i) << endl;
  }
  else
    cout << ":(" << endl;

  return 0;
}
