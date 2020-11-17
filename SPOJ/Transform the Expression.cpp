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

int priority(char x){
  if(x == '+')
    return 1;
  else if(x == '-')
    return 2;
  else if(x == '*')
    return 3;
  else if(x == '/')
    return 4;
  else if(x == '^')
    return 5;
  else
    return -1;
}

void solve(){
  string str, sol;
  cin >> str;
  stack<char> stk;

  for(int i = 0; i < str.length(); i++){
    if(str[i] == '(')
      stk.push(str[i]);

    else if(str[i] == ')'){
      while(stk.top() != '('){
        sol += stk.top();
        stk.pop();
      }
      stk.pop();
    }

    else if(str[i] >= 'a' && str[i] <= 'z')
      sol += str[i];

    else{
      while(priority(stk.top()) >= priority(str[i])){
        sol += stk.top();
        stk.pop();
      }
      stk.push(str[i]);
    }
  }

  cout << sol << endl;
}

int main(){
  FAST();
  //Code goes past here

  int t = 1;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
