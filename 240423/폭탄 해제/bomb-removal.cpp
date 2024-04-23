#include <iostream>
#include <string>
#include <utility>
using namespace std;
class Explosive{
    public:
    string code;
    char color;
    int sec;

    Explosive(string code, char color, int sec){
        this->code = code;
        this->color = color;
        this->sec = sec;
    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    int c;
    string a;
    char b;
    cin >> a >> b >> c;

    Explosive e = Explosive(a,b,c);
    cout << "code : " << e.code << endl; 
    cout << "color : " << e.color << endl;
    cout << "second : " << e.sec << endl;
    return 0;
}