#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a_math_score, a_eng_score, b_math_score, b_eng_score;
    cin >> a_math_score >> a_eng_score;
    cin >> b_math_score >> b_eng_score;

    if(a_math_score > b_math_score){
        cout << "A";
    }else if (a_math_score < b_math_score){
        cout << "B";
    }
    else if (a_eng_score > b_eng_score){
        cout << "A";
    }
    else{
        cout << "B";
    }

    return 0;
}