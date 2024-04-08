#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;
    int arr[1000]={};
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }


    int arr_limit = n;
    int limit_v = 0;
    while(1){
        int max = INT_MIN;
        for(int i = 0; i < arr_limit; i++ ){
            if(max < arr[i]){
                max = arr[i];
                limit_v = i;
            }
        }
        cout << limit_v+1 << " ";
        arr_limit = limit_v;
        
        if(limit_v==0){
            break;
        }
    }
    cin >> n;
    return 0;
}