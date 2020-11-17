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

  string sa, sb, sc;
  cin >> sa >> sb >> sc;

  int i = 0, j = 0, k = 0;
  char turn = 'a';

  while(true){
    if(turn == 'a'){
        if(i != sa.length())
            turn = sa[i++];
        else{
            cout << "A\n";
            break;
        }
    }
    else if(turn == 'b'){
        if(j != sb.length())
            turn = sb[j++];
        else{
            cout << "B\n";
            break;
        }
    }
    else if(turn == 'c'){
        if(k != sc.length())
            turn = sc[k++];
        else{
            cout << "C\n";
            break;
        }
    }
  }

  return 0;
}
