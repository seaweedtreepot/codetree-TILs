#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,k;
    cin >> n >> m >> k;
    int arr[101]={};
    int num;
    for(int i = 0; i < m; i++){
        cin >> num;
        arr[num]++;
        if(arr[num]>=k){
            cout << num;
            return 0;
        }
    }

    cout << -1;
    return 0;
}