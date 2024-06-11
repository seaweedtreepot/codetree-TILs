#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,arr[100];
    cin >> n >> m ;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = INT_MAX;


    for(int i = 1; i < 10001; i++){//구간당 최대값
        int sum = 0;
        int max=  0;
        int mcnt = 0;
        bool pos = true;
        for(int j = 0; j < n; j++){
            if(arr[j]>i){
                pos = false;
                break;
            }
            sum += arr[j];
            if(sum > i){
                sum -= arr[j];
                if(sum > max){
                    max = sum;
                }
                sum = arr[j];
                mcnt++;
            }
        }
        if(mcnt <= m-1  && pos ){
            cout << i ;
            return 0;
        }
    }
    return 0;
}