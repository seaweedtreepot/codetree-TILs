#include <iostream>
using namespace std;

int WhatIsNth(int n){
    if(n==0){
        return 2;
    }else if(n==1){
        return 4;
    }
    return (WhatIsNth(n-1) * WhatIsNth(n-2))%100;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << WhatIsNth(n-1);
    return 0;
}