#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string str;
    cin >> n;
    cin >> str;
    int cnt =0;
    for(int i = 0; i < n; i++){
        if(str[i]=='C'){
            for(int j = i+1; j < n; j++){
                if(str[j]=='O'){
                    for(int k = j+1; k < n; k++){
                        if(str[k]=='W'){
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}