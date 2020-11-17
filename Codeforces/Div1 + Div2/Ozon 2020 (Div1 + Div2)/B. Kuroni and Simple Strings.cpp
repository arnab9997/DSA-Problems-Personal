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

  string str;
  cin >> str;
  int k = 0;
  vi left, right;

  int i = 0, j = str.length() - 1;

  while(i < j){
    while(str[i] != '(' && i < j)
      i++;
    while(str[j] != ')' && i < j)
      j--;

    if(str[i] == '(' && str[j] == ')'){
        left.pb(i + 1);
        right.pb(j + 1);
    }
    i++;
    j--;
  }

  if(left.size() == 0)
    cout << 0 << endl;
  else{
    cout << 1 << endl;
    cout << left.size() * 2 << endl;
    for(auto x : left)
      cout << x << " ";
     reverse(all(right));
    for(auto x : right)
      cout << x << " ";
    cout << endl;
  }

  return 0;
}
