#include <iostream>
using namespace std;

int Pivonazi(int N){
    if(N==1){
        return 1;
    }else if (N==2){
        return 1;
    }

    return Pivonazi(N-1) + Pivonazi(N-2);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << Pivonazi(N);
    return 0;
}