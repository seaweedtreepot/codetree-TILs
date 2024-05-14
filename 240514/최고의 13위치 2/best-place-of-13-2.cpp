#include <iostream>
using namespace std;
bool IsRange(int n, int a, int b){
    return 0 <= a && a < n && 0<= b && b< n;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int ans = 0,n;
    int arr[20][20];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int h = 0; h < n; h++){
        for(int i = 0; i < n-2; i++){
            int cnt = 0;
            for(int j = i; j <= i+2; j++){
                if(arr[h][j]==1){
                    cnt++;
                }
            }
            int a = cnt;
            for(int g = 0; g < n; g++){
                for(int q = 0 ; q < n-2; q++){
                    cnt = a;
                    for(int w = q; w<=q+2;w++){
                        if(h==g && (q<=i && (i-2)<=q)) continue;
                        if(arr[g][w]==1){
                            cnt++;
                        }
                    }
                    if(ans < cnt){
                        ans = cnt;
                    }
                }
                
            }
            
        }
    }

    cout << ans;
    return 0;
}