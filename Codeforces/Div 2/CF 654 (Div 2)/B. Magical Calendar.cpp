/*
Goal: Comfortable with Div2C before hackercup Round 1 2020. Stable Expert before Interview (approx August).
Necessities: Implementation, Greedy, Binary Search, DFS, BFS, Sorting, math, Bit manipulation

Ethics:
1) Make calculated efforts.
2) Introspection is important for evey problem solved.
3) Upsolving is more important than practice.
4) I was improving in PUBG when I wasn't caring about rating. Rating is just a number.
   Focus more on enjoying the process than grinding for rating.
5) Improvement takes time. Take it slow. But be steady.
6) Don't compare with anyone - not even peers - only person suitable for comparison is you.

Div2A:  800-1200
Div2B: 1200-1500
Div2C: 1400-1800
Div2D: 1700-2200

Rules:
1) Give all contests from CF & AtCoder + upsolve. HIGHEST PRIORITY. (If #contests in week < 5, replenish with VC)
2) Learn "necessaties" from LeetCode (Easy + Medium) first.
3) int now = 800;
    while(){
      if(comfortable_and_AC_in_1Go())
        solve(5);
      else if(solvable_without_editorial())
        solve(10);
      else
        solve(20);
      now += 100;
    }
4) watch Errichto's "Boring" streams weekly.

Consistency daily:
1) get 5 AC in CF (TOTAL - INCLUDING CONTEST SUBMISSIONS)
2) get 10 AC in Leetcode
*/

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

void solve(){
  ll n, r;
  cin >> n >> r;

  ll ans = 0;

  if(n > r){
    ans += r * (r + 1) / 2;
  }
  else{
    n--;
    ans += n * (n + 1) / 2;
    ans++;
  }

  cout << ans << endl;
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
