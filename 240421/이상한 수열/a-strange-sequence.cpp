#include <iostream>
using namespace std;


int WhatIsNth(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }

    return WhatIsNth(n/3) + WhatIsNth(n-1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << WhatIsNth(N);
    return 0;
}