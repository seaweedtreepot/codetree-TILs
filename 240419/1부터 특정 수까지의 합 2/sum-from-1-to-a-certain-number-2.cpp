#include <iostream>
using namespace std;

int Sum(int N){
   if(N==1){
        return 1;
   }else if(N==0){
        return 0;
   }
   
    return (N + Sum(N-1));
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << Sum(N);
    return 0;
}