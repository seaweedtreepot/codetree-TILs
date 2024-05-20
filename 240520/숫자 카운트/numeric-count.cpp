#include <iostream>
using namespace std;

int Cnt1Of(int i,int j,int k, int q){
    int cnt = 0;
    if(q/100 == i){
        cnt++;
    }
    q%=100;
    if(q/10==j){
        cnt++;
    }
    q%=10;
    if(q==k){
        cnt++;
    }

    return cnt;
}

int Cnt2Of(int i, int j, int k, int q){
    int cnt =0;
        int temp = q;
        int cor = temp%10;
        temp /= 10;

        if(cor== i || cor == j){
            cnt++;
        }

        cor = temp %10;
        temp /=10;

        if(cor==i || cor == k){
            cnt++;
        }
        cor = temp %10;
        temp /=10;
        if(cor == j || cor == k){
            cnt++;
        }
    
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    //세자리수를 시뮬레이팅 하면서 주어진 n개의 수의 입력과 똑같이 카운트가 나오는 수를 센다
    int n;
    int arr[10][3];
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                int ans_cnt=0;
                for(int q = 0; q < n; q++){
                    int cnt1=0,cnt2=0;
                    cnt1 = Cnt1Of(i,j,k,arr[q][0]);
                    cnt2 = Cnt2Of(i,j,k,arr[q][0]);
                    if(cnt1 == arr[q][1] && cnt2 == arr[q][2]){
                        ans_cnt++;
                        //cout << arr[q][0] << " " << cnt1 << " " << cnt2 << endl;
                        //cout << i << j << k << endl;
                    }
                    
                }
                if(ans_cnt==n){
                    ans++;
                }
            }
        }
    }
    cout << ans;
    return 0;
}