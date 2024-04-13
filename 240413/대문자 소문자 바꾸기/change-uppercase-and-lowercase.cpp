#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    for(int i = 0; i < A.length();i++){
        if('a'<=A[i] && A[i]<='z'){
            A[i] = A[i] - 'a' + 'A';
        }else{
            A[i] = A[i]-'A'+'a';
        }
    }
    cout << A;
    return 0;
}