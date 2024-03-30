#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int water;
    cin >> water;

    if(water < 0){
        coout << "ice";
    }else if(water>=100){
        cout << "vapor" ;
    }
    else{
        cout << "water";
    }
    return 0;
}