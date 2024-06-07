#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string str;
    string dupl = "";
    bool flag = true;
    cin >> n >> str;

    for(int i = 0; i < n/2; i++){
        dupl += str[i];
        for(int j = i; j < n; j++){
            if(dupl[0]==str[j]){
                for(int k = 1; k < dupl.length();k++){
                    if(dupl[k]!=str[j+k]){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == false){
                break;
            }
        }
        if(flag == false){
            break;
        }
    }
    if(flag){
        cout << dupl.length() +1;
    }
    if(!flag){
        cout << dupl.length();
    }
    return 0;
}