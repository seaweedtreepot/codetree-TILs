#include <iostream>
using namespace std;

void PrintStars(int N){
    if(N==0){
        return;
    }
    PrintStars(N-1);
    for(int i = 0; i < N; i++){
        cout << "*";
    }
    cout << endl;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    PrintStars(N);
    return 0;
}