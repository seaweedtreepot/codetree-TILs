#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    int min_val = INT_MAX;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += (abs(j-i) * arr[j]);
        }
        if(min_val > sum){
            min_val = sum;
        }
    }

    cout << min_val ;
    return 0;
}