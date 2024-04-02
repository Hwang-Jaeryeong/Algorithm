#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int> st;
    int n;
    cin >> n;
    vector<char> result;
    vector<int> input(n);
    int num = 1;
    while(n--){
        int x; cin >> x;
        // 스택 맨위 원소가 현재 입력 원소랑 똑같으면 ~
        if(!st.empty() && st.top() == x) {
            st.pop();
            result.push_back('-');
        }
        // 입력한 원소보다 작으면 ~ 같을 때까지 스택에 증가하면서 넣기
        else if (num <= x){
            while(num <= x){
                st.push(num++);
                result.push_back('+');
            } 
            st.pop();
            result.push_back('-');
        }
        // 아예 안되는 경우 : 지금 수가 스택 맨 위보다 클 때
        else if(!st.empty() && st.top() > x){
            cout << "NO" << endl;
            return 0;
        }
    }
    for(auto i : result){
        cout << i << endl;
    }
}