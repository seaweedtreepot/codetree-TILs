#include <iostream>
#include <string>
using namespace std;

bool InRange(int n,int m,int a,int b){
    return 0<=a && a< n && 0<= b && b<m;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int dx[8]={1,1,0,-1,-1,-1,0,1},dy[8]={0,1,1,1,0,-1,-1,-1};
    int n,m;
    string arr[50];
    int cnt =0;
    cin >> n>>m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]!='L') continue;

            for(int k = 0; k < 8; k++){
                int curt = 1;
                int curx = i+dx[k];
                int cury = j+dy[k];
                for(int g = 0; g < 2; g++){
                    if(InRange(n,m,curx,cury)==false){
                        break;
                    }
                    if(arr[curx][cury]!='E'){
                        break;
                    }
                    curt++;
                    curx += dx[k];
                    cury += dy[k];
                }

                if(curt==3){
                    cnt++;
                }
            }
            
        }
    }
    cout << cnt;
    return 0;
}