#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int a;
    for(int i = 0; i < 3; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), less<>());
    for(auto& i : v) cout<< i << " ";
}