#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int arr[n];
    int rem_zero = 0, rem_one = 0, rem_two = 0;

    for(int i = 0; i < n; i++){
      cin >> arr[i];
      if(arr[i] % 3 == 0)
        rem_zero++;
      else if(arr[i] % 3 == 1)
        rem_one++;
      else
        rem_two++;
    }

    if((rem_zero == 0 && rem_one != 0 && rem_two != 0) || (rem_zero > rem_one + rem_two + 1))
      cout << "No\n";
    else
      cout << "Yes\n";
  }
  return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int x;
  cin >> x;
  string ans;
  while(x){
    int rem = x % 2;
    x /= 2;
    if(rem == 0)
        ans += '0';
    else
        ans +=  '1';
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
