#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define endl '\n'
int arr[7];
int n, m;
bool isused[7];

void func(int k){
    if(k == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++){
            arr[k] = i;
            isused[i] = 1;
            func(k+1);
            isused[i] =0;
    }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  func(0);
}