#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // a의 아스키 코드는 97. z는 122까지 할당되어있음.
    int alpha[26] = {0};
    string str;
    cin >> str;
    for(char c : str){
        alpha[c-'a']++;
    }

    // 배열 값 출력
    for(int i = 0; i < 26; i++){
        cout << alpha[i] << " ";
    }
}