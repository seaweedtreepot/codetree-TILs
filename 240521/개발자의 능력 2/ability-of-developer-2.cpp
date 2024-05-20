#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[6];
    int min_a = INT_MAX;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }


    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            for(int k = 0; k < 6; k++){
                for(int s = 0; s < 6; s++){
                    for(int w = 0; w < 6; w++){
                        for(int x = 0; x < 6; x++){
                           int sum1=0,sum2=0,sum3=0;
                           if(i==j || j== k || k == s || s == w || w==x||
                           i==k || i == s || i == w || i == x ||j==s || j==w||
                           j == x||k==w||k==x||s==x){
                            continue;
                           }
                           sum1 += arr[i] + arr[j];
                           sum2 += arr[k] + arr[s];
                           sum3 += arr[w] + arr[x];
                            int big_sum = max({sum1,sum2,sum3});
                            int min_sum = min({sum1,sum2,sum3});
                            if(min_a > (big_sum-min_sum)){
                                min_a = big_sum-min_sum;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << min_a;
    return 0;
}