class Solution {
public:
  string sortString(string s) {
    char arr[26] = {0};
    for(char x : s)
    arr[x - 'a']++;

    string ans;
    while(true){
      for(int i = 0; i < 26; i++){
        if(arr[i] > 0){
          ans += ('a' + i);
          arr[i]--;
        }
      }
      for(int i = 25; i >= 0; i--){
        if(arr[i] > 0){
          ans += ('a' + i);
          arr[i]--;
        }
      }

      int cnt = 0;
      for(int i = 0; i < 26; i++){
        if(arr[i] == 0)
        cnt++;
      }
      if(cnt == 26)
      break;
    }
    return ans;
  }
};
