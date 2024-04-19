#include <iostream>
using namespace std;

int Cnt(int N){
    if(N==1){
        return 0;
    }

    if(N%2==0){
        N/=2;
        return 1 + Cnt(N);
    }else{
        N/=3;{
            return 1 + Cnt(N);
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << Cnt(N);
    return 0;
}