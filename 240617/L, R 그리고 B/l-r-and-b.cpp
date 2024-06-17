#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char arr[10][10];
    
    for(int i = 0; i < 10;i++){
        for(int j = 0; j < 10; j++){
            cin >> arr[i][j];
        }
    }
    int Biidx = 0;
    int Bjidx = 0;
    int Liidx = 0;
    int Ljidx = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(arr[i][j]=='B'){
                Biidx = i;
                Bjidx = j;
            }else if(arr[i][j]=='L'){
                Liidx = i;
                Ljidx = j;
            }
        }
    }

    int ans = abs(Liidx - Biidx) + abs(Ljidx - Bjidx) -1;
    cout << ans;
    return 0;
}