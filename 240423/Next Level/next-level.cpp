#include <iostream>
#include <tuple>
#include <algorithm>
#include <string>
#include <utility>
#include <functional>
using namespace std;
class Member{
    public:
    string id;
    int level;
    Member(string id="codetree", int level=10){
        this->id = id;
        this->level = level;
    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b;
    Member m = Member();
    cout <<"user "<<  m.id << " lv " << m.level << endl;
    cin >> a >> b;
    m = Member(a,b);
    cout <<"user "<<  m.id << " lv " << m.level << endl;
    return 0;
}