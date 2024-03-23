#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define endl '\n'

int alpha[26];
// 팰린드롬은 앞, 뒤 어떤 방향으로 읽어도 똑같은 것

// 팰린드롬이 될 때
//1. 주어진 문자열의 문자 개수가 홀수일 때 주어진 알파벳 중 한 종류만 홀수이고 나머지가 짝수일 때
//2. 주어진 문자열의 문자 개수가 짝수일 때 주어진 알파벳이 다 짝수개일 때
int main(){
    string name;
    cin >> name;
 
    for (int i=0; i<name.size(); i++)
        alpha[name[i] - 'A']++;
 
    int error = 0;
    int index = -1;
 
    for (int i=0; i<26; i++){
        if (alpha[i] > 0){
            if (alpha[i] % 2 == 1){
                index = i;
                alpha[i]--;
                error++;
            }
        }
    }
 
 
    // 홀수번 등장한 알파벳이 2개 이상이면 불가능
    if (error>1)
        printf("I'm Sorry Hansoo\n");
    else {
        string ans = "";
        string temp = "";
        for (int i = 0; i < 26; i++) {
            if (alpha[i] > 0) {
                for (int j = 0; j < alpha[i] / 2; j++) {
                    ans += i + 'A';
                }
            }
        }
        temp = ans;
        reverse(temp.begin(), temp.end());
        if (index != -1) {
            ans += index + 'A';
        }
        ans += temp;
        cout << ans << '\n';
    }
}