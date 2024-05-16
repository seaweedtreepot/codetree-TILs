#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >> k;
    int arr[101]={};
    int cur,cur2;
    for(int i = 0; i < n; i++){
        cin >> cur >> cur2;
        arr[cur2] += cur;
    }
    int max = 0;
    if(k > 50){
        int sum = 0;
        for(int i = 0; i < 101; i++){
            sum += arr[i];
        }
        cout << sum;
        return 0;
    }
    for(int i = k; i < 101-k ;i++){
        int sum = 0;
        for(int j = i-k; j <= i+k; j++){
            sum += arr[j];
        }
        if(max < sum){
            //cout << i << " " << sum << endl;
            max = sum;
        }
    }

    cout << max;
    return 0;
}