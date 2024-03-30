#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a_age, b_age;
    char a_gen, b_gen;
    cin >> a_age >> a_gen;
    cin >> b_age >> b_gen;
    if((a_age>=19 && a_gen == 'M')||(b_age>=19 && b_gen == 'M'))
        cout << 1;
    else 
        cout << 0;
    return 0;
}