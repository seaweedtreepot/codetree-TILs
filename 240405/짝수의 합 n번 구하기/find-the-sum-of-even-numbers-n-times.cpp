#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a, b;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        int cnt =0;
        for(int j = a; j < b+1; j++){
            if(j%2==0){
                cnt += j;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}