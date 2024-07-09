#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v;
    string str;
    int n;
    cin >> n;
    int num1;
    for(int i = 0; i <  n; i++){
        cin >> str;
        if(str == "push_back"){
            cin >> num1;
            v.push_back(num1);
        }else if(str=="get"){
            cin >> num1;
            cout << v[num1-1]<<endl;
        }else if(str=="size"){
            cout << v.size()<<endl;
        }else if(str=="pop_back"){
            v.pop_back();
        }
    }
    return 0;
}