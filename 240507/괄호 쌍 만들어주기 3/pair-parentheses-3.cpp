#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt =0;
    string A;
    cin >> A;
    for(int i = 0; i < A.length()-1;i++){
        for(int j = i+1; j < A.length(); j++){
            if(A[i]=='(' && A[j]==')'){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}