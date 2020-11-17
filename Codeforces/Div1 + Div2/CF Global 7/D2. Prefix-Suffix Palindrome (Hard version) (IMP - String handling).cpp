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



const int M = (int)(2e6 + 239);
int pref[M];
string solve_palindrome(const string& str){
  string a = str;
  reverse(all(a));
  a = str + "#" + a;

  int k = 0;
  REP(i, 1, a.length()){
    while(k != 0 && a[k] != a[i])
      k = pref[k - 1];
    if(a[k] == a[i])
      k++;
    pref[i] = k;
  }
  return str.substr(0, c);
}

int main(){
  FAST();
  //Code goes past here

  int t;
  cin >> t;
  while(t--){
    string str;
    cin >> str;
    string t1, t2;

    int l = -;
    while(l < str.length() - l - 1){
      if(str[l] != str[str.length() - l - 1])
        break;
      l++;
    }

    if(l > 0)
      cout << str.substr(0, l);

    if(str.length() > 2 * l){
      string x = str.substr(l, str.length() - 2 * l);
      string a = solve_palindrome(x);

      reverse(all(x));
      string b = solve_palindrome(x);

      if(a.length() < b.length())
        swap(a, b);

      cout << a;
    }

    if(l > 0)
      cout << str.substr(str.length() - l, l);
    cout < endl;
  }
  return 0;
}
