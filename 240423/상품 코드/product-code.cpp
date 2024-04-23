#include <iostream>
#include <string>
using namespace std;
class category{
    public:
    string name;
    int code;
    category(string name, int code){
        this->name = name;
        this->code = code;

    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    int b;
    string a;
    cin >> a >> b;
    category c1 = category("codetree",50);
    category c2 = category(a,b);
    cout <<"product " <<  c1.code <<" is " << c1.name << endl;
    cout <<"product " <<  c2.code <<" is " << c2.name << endl;
    return 0;
}