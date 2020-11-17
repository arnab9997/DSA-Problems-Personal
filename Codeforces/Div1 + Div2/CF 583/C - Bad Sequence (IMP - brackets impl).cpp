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
  string str;
  cin >> str;

  //M1 - NEKO'S SOLUTION:

  // int op = 0, cl = 0;
  // for(char c : str){
  //   op += (c == '(');
  //   cl += (c == ')');
  // }
  // if(op != cl){
  //   cout << "No\n";
  //   return 0;
  // }
  //
  // string abc;
  // int chance = 0;
  // for(char c : str){
  //   if(c == '(')
  //     abc.pb(c);
  //   else{
  //     if(chance == 0){  //eliminate one of ')'
  //       chance = 1;
  //     }
  //     else
  //       abc.pb(c);
  //   }
  // }
  // abc.pb(')');
  //
  // int cnt = 0;
  // for(char c : abc){
  //   if(c == '(')
  //     cnt++;
  //   else
  //     cnt--;
  //
  //   if(cnt < 0){
  //     cout << "No\n";
  //     return 0;
  //   }
  // }
  //
  // cout << "Yes\n";










  // M2 - MIFAFAOVO'S SOLUTION:

  // int bal = 0, mbal = 0;
  // REP(i, 0, n){
  //   if(str[i] == '(')
  //     bal++;
  //   else
  //     bal--;
  //
  //   mbal = min (mbal, bal);
  // }
  //
  // if(bal == 0 && mbal >= -1)
  //   cout << "Yes\n";
  // else
  //   cout << "No\n";

  return 0;
}
