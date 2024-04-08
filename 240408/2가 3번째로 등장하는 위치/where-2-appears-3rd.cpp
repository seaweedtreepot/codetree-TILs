#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[100]={};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt =0;

    for(int i = 0; i < n ;i++){
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                cout << i+1 << endl;
                break;
             }
        }
    }
    return 0;
}