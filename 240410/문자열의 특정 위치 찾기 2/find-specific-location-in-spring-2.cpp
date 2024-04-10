#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str1[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    cin >> a;
    bool is_fine[5] = {};
    int cnt = 0;
    for(int i = 0; i < 5; i++){
        if(str1[i][3]==a || str1[i][2]==a){
                is_fine[i] = true;
                cnt++;
                continue;
        }
    }

    for(int i = 0; i < 5; i++){
        if(is_fine[i]){
            cout << str1[i] << endl;
        }
    }

    cout << cnt;
    return 0;
}