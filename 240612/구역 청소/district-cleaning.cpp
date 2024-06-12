#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x[4];
    for(int i = 0; i < 4; i++){
        cin >> x[i];
    }

    bool grid[101]={};

    for(int i = x[0]; i < x[1]; i++){
        grid[i]=true;
    }
    for(int i = x[2]; i < x[3];i++){
        grid[i]= true;
    }

    int cnt = 0;

    for(int i = 0; i < 101; i++){
        if(grid[i]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}