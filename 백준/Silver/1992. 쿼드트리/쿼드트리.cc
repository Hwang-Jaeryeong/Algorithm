#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define endl '\n'

int board[64][64];

// x, y는 시작점
void func(int n, int x, int y){
    int count = 0; // 1의개수
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[x+i][y+j]) count++;
        }
    }
    if(count == 0) cout << "0";
    else if(count == n*n) cout << "1";

    else {
        cout << "(";
        func(n/2,x,y);
        func(n/2,x,y+n/2);
        func(n/2,x+n/2,y);
        func(n/2,x+n/2,y+n/2);
        cout << ")";
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<n;j++){
            board[i][j]=int(s[j])-int('0');
        }
    }
    func(n,0,0);
    
}