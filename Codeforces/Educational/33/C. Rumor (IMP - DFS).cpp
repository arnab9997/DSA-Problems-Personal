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


vector<int> adj[100001];
bool visited[100001];
int n, m;
vi bribe(100001);

int dfs(int node, int& mini){              // returns minimum bribe to be given to a path
  visited[node] = true;
  mini = min(mini, bribe[node]);

  REP(i, 0, adj[node].size()){
    int child = adj[node][i];
    if(!visited[child])
      dfs(child, mini);
  }
  return mini;
}

int main(){
  FAST();

  cin >> n >> m;
  REP(i, 0, n)  cin >> bribe[i + 1];

  REP(i, 0, m){
    int x, y;
    cin >> x >> y;
    adj[x].pb(y);
    adj[y].pb(x);
  }

  ll total = 0;

  REP(i, 0, n){
    if(!visited[i + 1]){                    // since nodes are 1-indexed
      int mini = INT_MAX;
      total += dfs(i + 1, mini);
    }
  }

  cout << total << endl;

  return 0;
}
