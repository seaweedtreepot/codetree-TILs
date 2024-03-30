#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int counter,a_ther,b_ther,c_ther;
    char a,b,c;
    counter =0;
    cin >> a >> a_ther;
    cin >> b >> b_ther;
    cin >> c >> c_ther;
    if(a == 'Y'&& a_ther >=37){
        counter++;
    }

    if(b=='Y'&& b_ther >= 37)
        counter++;
    if(c=='Y'&&c_ther >= 37)
        counter++;


    if(counter>=2){
        cout << "E";
    }
    else 
    cout << "N";
    return 0;
}