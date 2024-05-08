#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int r,c;
    char plain[15][15];

    cin >> r >> c;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> plain[i][j];
        }
    }
    int cnt = 0;

    for(int i = 1; i < r; i++){
        for(int j = 1; j < c; j++){
            if(plain[i][j]!=plain[0][0]){
                for(int k = i+1; k < r-1; k++){
                    for(int u = j+1; u < c-1; u++){
                        if(plain[k][u]!=plain[i][j]&&plain[k][u]!=plain[r-1][c-1]){
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}