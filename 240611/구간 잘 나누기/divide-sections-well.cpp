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


    for(int i = 1; i < 10000; i++){//구간당 최대값
        int sum = 0;
        int max = 0;
        int mcnt = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j];
            if(sum > i){
                sum -= arr[j];
                if(sum > max){
                    max = sum;
                    //cout << sum << endl;    
                }
                sum = arr[j];
                mcnt++;
            }
        }
        if(mcnt <= m-1 && max == i){
            cout << i ;
            return 0;
        }
    }
    return 0;
}