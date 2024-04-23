#include <iostream>
#include <algorithm>
#include <functional>
#include <tuple>
#include <utility>
#include <string>
using namespace std;

class Meeting{
    public:
    string SecretCode;
    char MeetingPlace;
    int Time;
    Meeting(string SC, char MP, int T){
        SecretCode = SC;
        MeetingPlace = MP;
        Time = T;
    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char b;
    int c;
    cin >> a >> b >> c;
    Meeting m = Meeting(a,b,c);
    cout << "secret code : " << m.SecretCode << endl;
    cout << "meeting point : " << m.MeetingPlace << endl;
    cout << "time : " << m.Time << endl;
    return 0;
}