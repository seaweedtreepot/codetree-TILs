#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    double visi;
    cin >> visi;

    if(visi>=1){
        cout << "High";
    }
    else if (visi >=0.5){
        cout << "Middel";
    }else{
        cout << "Low";
    }
    return 0;
}