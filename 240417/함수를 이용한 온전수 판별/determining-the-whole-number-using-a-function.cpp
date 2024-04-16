#include <iostream>
using namespace std;



int CountAll(int a, int b){
    int cnt =0;

    for(int i = a; i < b +1; i++){
        if(i%2!=0 && i%10!=5 && !(i%3==0 && i%9!=0)){
            cnt++;
          //  cout << i << endl;
        }
    }

    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a>>b;

    cout << CountAll(a,b);
    return 0;
}