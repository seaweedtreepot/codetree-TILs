#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
    char a;
    list<char> l;
    list<char>::iterator it;
    it = l.begin();
    for(int i = 0; i < n; i++){
        l.push_back(str[i]);
    }
    for(int i = 0; i < m; i++){
        cin >> a;
        if(a=='L'){
            if(it != l.begin()){
                it--;
            }
        }else if(a=='P'){
            cin >> a;
            l.insert(it,a);
        }else if(a=='R'){
            if(it != l.end()){
                it++;
            }
        }else if(a=='D'){
            if(it!=l.end()){
                it = l.erase(it);
            }
        }
    }

    for(it = l.begin(); it!=l.end();it++){
        cout << *it;
    }
    return 0;
}