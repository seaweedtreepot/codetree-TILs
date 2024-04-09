#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i <n; i++){
        int cnt = i + 1;
        for(int j = 0; j < n; j++){
            cout <<  cnt << " ";
            cnt+=n;
        }
        cout << endl;
    }


    return 0;
}