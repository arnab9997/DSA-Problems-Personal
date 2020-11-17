#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, sol;
    getline(cin, str);

    stack<char> stk;

    int i = 0;
    while(i < str.length()){
        while(i < str.length() && str[i] != ' '){
            stk.push(str[i++]);
        }
        while(!stk.empty()){
            sol += stk.top();
            stk.pop();
        }
        sol += ' ';
        i++;
    }

    cout << sol << endl;
    return 0;
}
