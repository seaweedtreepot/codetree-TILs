#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    char input1;
    int n;
    int m;
    string str;
    list<char> l;
    list<char>:: iterator it;
    it = l.begin();//이터레이터는 선언하고 나서 반드시 대상과 이어줘야한다
    cin >> n >> m >> str;

    for(int i = 0;i < n; i++){
        l.push_back(str[i]);
        
    }
    for(int i = 0; i < m; i++){
        cin >> input1;
        
        if(input1=='L' && it != l.begin()){
            it--;
        }else if(input1 == 'R' && it != l.end()){
            it++;
        }else if(input1 == 'D'&& it != l.end()){
            it = l.erase(it);
        }else if(input1 == 'P'){
            cin >> input1;
            l.insert(it,input1);

        }
    }
    

    for(it = l.begin();it!=l.end();it++){
        cout << *it;
    }
    return 0;
}