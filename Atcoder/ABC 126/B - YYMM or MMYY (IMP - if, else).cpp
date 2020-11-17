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

  /*MY METHOD (wrong - WHY?):
  string str;
  cin >> str;
  string x(str.begin(), str.begin() + 2);
  string y(str.begin() + 2, str.end());

  if((x == "00" || y == "00") || (x >= "13" && y >= "13"))  // anything (lower than 13) + 00 is not NA eg: 1200
    cout << "NA\n";
  if((x > "00" && x < "13") && (y > "00" && y < "13"))
    cout << "AMBIGUOUS\n";
  else if(x > "00" && x < "13")
    cout << "MMYY\n";
  else if(y > "00" && y < "13")
    cout << "YYMM\n";
  */

  //EDITORIAL METHOD:
  int str;
  cin >> str;
  int x = str / 100;
  int y = str % 100;
  if(x > 0 && x < 13){
    if(y > 0 && y < 13)
      cout << "AMBIGUOUS\n";
    else
      cout << "MMYY\n";
  }

  else{
    if(y > 0 && y < 13)
      cout << "YYMM\n";
    else
      cout << "NA\n";
  }

  return 0;
}
