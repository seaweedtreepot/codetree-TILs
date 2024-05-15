#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;

    int arr[100];

    cin >> n >> k ;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = 0;
    for(int i = 0; i < n+1-k; i++){
        int sum = 0;
        for(int j = i; j < i+k; j++){
            sum += arr[j];
        }
        //cout << sum << " " << i << endl;
        if(max < sum){
            max = sum;
            //cout << i << endl;
        }
    }

    cout << max;
    return 0;
}