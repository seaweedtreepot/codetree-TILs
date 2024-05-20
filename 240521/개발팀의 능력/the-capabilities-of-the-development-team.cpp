#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[5];
    int n = 5;
    int sum = 0;
    int ans_min = -1;
    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = 0; k < n; k++){
                for(int l = k+1; l < n; l++){
                    if(l==i || l==j || i==k||j==k){
                        continue;
                    }
                
                    int sum1 = (arr[i]+arr[j]);
                    int sum2 = (arr[k]+arr[l]);
                    int sum3 = (sum-sum1-sum2);
                    if(sum1 == sum2 || sum2 == sum3 || sum3 == sum1)
                        continue;

                    int sum_min = min({sum1,sum2,sum3});
                    int sum_max = max({sum1,sum2,sum3});
                    
                    if(ans_min > (sum_max-sum_min) || ans_min==-1){
                        ans_min = (sum_max-sum_min);
                    }
                }
            }
        }
    }
    cout << ans_min;
    return 0;
}