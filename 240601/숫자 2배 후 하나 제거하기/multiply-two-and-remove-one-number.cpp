#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,min=INT_MAX;
    int arr[100];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){//i번째 숫자 2배
        for(int j = 0; j < n; j++){//j번째 숫자 넘기기
            int sum = 0;
            //cout << "i:" << i << " " << "j:" << j <<endl;
            for(int k = 0; k < n-1; k++){//차이구하기
                int temp1 = arr[k],temp2 = arr[k+1];

                if(k==i){
                    temp1 *= 2;
                }
                if(k+1 == i){
                    temp2 *= 2;
                }
                if(k==j){
                    continue;
                }
                if(k+1 == j ){
                    if(k+1 == n-1){
                        continue;
                    }
                    temp2 = arr[k+2];
                }
                sum += abs(temp1 - temp2);
                //cout << temp1 << " - " << temp2 << endl;
            }
            if(sum < min){
                min = sum;
                //cout << min <<endl;
            }
            //cout << endl;
        }
    }

    cout << min;

    return 0;
}