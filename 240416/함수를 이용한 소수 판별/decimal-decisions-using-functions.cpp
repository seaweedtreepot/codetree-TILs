#include <iostream>
using namespace std;

bool isPrime(int i){
    for(int j = 2; j < i; j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}

int SunOfPrime(int a, int b){
    int sum =0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a>>b;

    cout << SunOfPrime(a,b);
    return 0;
}