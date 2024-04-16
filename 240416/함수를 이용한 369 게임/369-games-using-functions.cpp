#include <iostream>
using namespace std;


bool IsHaveThree(int i){
    bool flag = false;
    while(1){
        if(i==0){
            break;
        }
        int temp = i%10;
        if(temp%3==0&&temp!=0){
            flag = true;
            break;
        }else{
            i/=10;
        }

    }
    return flag;
}
bool MultiOfThree(int i){
    return (i%3==0);
}

int SpecialCnt(int a, int b){
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(MultiOfThree(i) || IsHaveThree(i)){
          //  cout << i << endl;
            cnt++;
        }
    }
    return cnt;
} 
int main() {
    // 여기에 코드를 작성해주세요.
    int a ,b;
    cin >> a >> b;


    cout << SpecialCnt(a,b);
    return 0;
}