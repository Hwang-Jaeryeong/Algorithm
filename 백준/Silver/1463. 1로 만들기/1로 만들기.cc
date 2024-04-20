#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define endl '\n'

int n;
int d[10000005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    d[1] = 0;
    for(int i = 2; i <= n; i++){
        d[i] = d[i-1] + 1;
        if(i%2 == 0) d[i] = min(d[i], d[i/2]+1);
        if(i%3 == 0) d[i] = min(d[i], d[i/3] + 1);
    }

    cout << d[n];
}