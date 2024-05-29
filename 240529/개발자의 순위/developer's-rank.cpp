#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int k,n;
    int arr[10][20];
    int cnt=0;

    cin >> k >> n;

    if(n==1){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i <= n; i++){//a번째 개발자
        for(int j=1;j<=n;j++){//b번째 개발자
            if(i==j)
                continue;
            bool flag = true;

            for(int q = 0; q< k; q++){
                for(int w = 0; w < n; w++){
                    for(int t = 0; t < n; t++){
                        if(arr[q][w]==i && arr[q][t]==j){
                            if(w > t){
                                flag = false;
                            }
                        }
                    }
                }
            }

            if(flag){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}