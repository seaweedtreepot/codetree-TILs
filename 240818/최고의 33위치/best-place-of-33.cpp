#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n;
    int arr[20][20];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int max = 0;
    int cnt = 0;
    for(int i = 0; i <= n-3; i++){
        for(int j = 0; j <= n-3; j++){
            cnt += arr[i][j] + arr[i][j+1] + arr[i][j+2] 
                    + arr[i+1][j] + arr[i+1][j+1] + arr[i+2][j+2]
                    + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(cnt > max){
                max = cnt;
                cnt=0;
            }
        }
        
        
    }
    cout << max;
    return 0;
}