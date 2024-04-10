#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10];
    int n; cin >> n;
    int cnt =0;
    int sum =0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n ; i++){
        sum+= arr[i].length();
        if(arr[i][0]=='a'){
            cnt++;
        }
    }
    cout << sum << " " << cnt;
    return 0;
}