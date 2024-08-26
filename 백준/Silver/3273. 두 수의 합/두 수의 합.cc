#include <bits/stdc++.h>
using namespace std;

long long cnt[2000001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        cnt[a]++;
    }

    int x;
    cin >> x;

    long long ans = 0;
    for(int i = 1; i <= x; i++){
        ans += (cnt[i] * cnt[x-i]);
    }
    
    cout << ans/2;
}