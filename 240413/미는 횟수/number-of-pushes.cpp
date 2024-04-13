#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A, B;

    cin >> A>>B;

    int cnt =-1;
    for(int i = 0; i < A.length();i++){
        A = A[A.length()-1] + A.substr(0,A.length()-1);
        if(A == B){
            cnt = i+1;
            break;
        }
    }
    cout << cnt;
    return 0;
}