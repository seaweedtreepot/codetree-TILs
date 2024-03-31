#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int n;
    for(int i = 0; i < N; i++){
        cin >> n;
        if(n%3==0 || n%2==0){
            cout << n << "\n";
        }
    }
    return 0;
}