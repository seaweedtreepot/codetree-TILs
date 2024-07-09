#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    list<int> l;
    cin >> n;
    string str;

    for(int i = 0; i < n; i++){
        cin >> str;
        if(str=="push_front"){
            cin >> a;
            l.push_front(a);
        }else if(str=="push_back"){
            cin >> a;
            l.push_back(a);
        }else if(str=="pop_front"){
            cout << l.front() << endl;
            l.pop_front();
        }else if(str=="pop_back"){
            cout << l.back() <<endl;
            l.pop_back();
        }else if(str=="size"){
            cout << l.size()<<endl;
        }else if(str=="empty"){
            cout << (l.empty()? 1 : 0) <<endl;
        }else if(str=="front"){
            cout << l.front() << endl;
        }else if (str=="back"){
            cout << l.back() <<endl;
        }
    }
    return 0;
}