#include <iostream>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n>>k;
    string t;
    cin >> t;
    string arr[100];
    for(int i = 0; i <n;i++ ){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    for(int i =0; i < n; i++){
        //cout << arr[i] << endl;
    }
    int idx = 0;
    while(1){
        if(k==0){
            cout << arr[--idx];
            break;
        }
        //cout << arr[idx] <<" ";
        if(arr[idx++].substr(0,t.length())==t){
            k-- ;
        }
    }

    return 0;
}