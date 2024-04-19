#include <iostream>
using namespace std;

void PrintFlower(int N){
    if(N==0){
        return;
    }
    cout << N << " ";
    PrintFlower(N-1);
    cout << N << " ";
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    PrintFlower(N);
    return 0;
}