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
    int n, ans;
    cin >> n;
    while(n--){
        cin >> ans;
        if(ans == 0) st.pop();
        else st.push(ans);
    }

    int cnt = 0, result = 0;
    while(!st.empty()){
        result = st.top();
        st.pop();
        cnt += result;
    }

    cout << cnt << endl;

	return 0;
}