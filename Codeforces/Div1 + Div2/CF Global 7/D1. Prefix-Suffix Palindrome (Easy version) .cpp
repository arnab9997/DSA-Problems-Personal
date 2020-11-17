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
    string str;
    cin >> str;
    string t1, t2;

    if(str.length() == 1){
      cout << str << endl;
      continue;
    }

    int i = 0, j = str.length() - 1;
    while(str[i] == str[j] && i < j){
      t1 += str[i];
      t2 += str[j];
      i++;
      j--;
    }
    reverse(all(t2));

    string l;
    for(int a = i, b = j; a <= b; ){
      if(str[a] == str[b]){
        string x(str.begin() + a, str.begin() + b + 1);
        //cout << "x: " << x << endl;
        string y(x);
        reverse(all(y));
        if(x == y){
          l = x;
          break;
        }
      }
      b--;
    }

    string r;
    for(int a = i, b = j; a <= b; ){
      if(str[a] == str[b]){
        string x(str.begin() + a, str.begin() + b + 1);
        //cout << "x: " << x << endl;
        string y(x);
        reverse(all(y));
        if(x == y){
          r = x;
          break;
        }
      }
      a++;
    }

    cout << t1 + ((l.length() >= r.length()) ? l : r) + t2 << endl;
  }
  return 0;
}
