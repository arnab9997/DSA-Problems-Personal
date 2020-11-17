/*A*/
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

//////      M1 - Brute force/////
//   int n, m;
//   cin >> n >> m;
//   vector<vector<int> > board(n, vector<int>(m, 0));
//   REP(i, 0, n)  REP(j, 0, m)  cin >> board[i][j];
//
//   int turn = 0;
//   REP(i, 0, n){
//     REP(j, 0, m){
//       if(board[i][j] == 0){
//         bool flag = 1;
//         REP(x, 0, m)
//           if(board[i][x] == 1)
//             flag = 0;
//         REP(y, 0, n)
//           if(board[y][j] == 1)
//             flag = 0;
//
//         if(flag == 1){
//           board[i][j] = 1;
//           turn++;
//         }
//       }
//     }
//   }
//
//   if(turn % 2 == 0)
//     cout << "Vivek" << endl;
//   else
//     cout << "Ashish" << endl;

//////      M2 - Data Structures/////
  // int n, m;
  // cin >> n >> m;
  // vector<vector<int> > board(n, vector<int>(m, 0));
  // set<int> r, c;
  //
  // REP(i, 0, n){
  //   REP(j, 0, m){
  //     cin >> board[i][j];
  //     if(board[i][j] == 1){
  //       r.insert(i);
  //       c.insert(j);
  //     }
  //   }
  // }
  // int mn = min (n - r.size(), m - c.size());
  //
  // if(mn % 2 == 0)
  //   cout << "Vivek\n";
  // else
  //   cout << "Ashish\n";
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
